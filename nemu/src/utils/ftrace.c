#include <common.h>
#include <elf.h>
#include <common.h>


extern uint64_t g_nr_guest_inst;
FILE *ftrace_fp = NULL;
char*fname;
int OStype;
int frc;
int *frc1;
FILE *fp;
int symoff;
int stroff;
int strnum;
int symcount;
char strtable[9999];
Elf64_Shdr shdr[99];

struct funt{
    uint64_t value;
    int ffnum;
    int fsize;
    char name[20];
}func[20];

void section_header_64_parse(Elf64_Ehdr* ehdr);
void ELF_header_64_parse(Elf64_Ehdr* ehdr);
void symtab_64_parse(Elf64_Ehdr* ehdr);
void print64(void(*fun)(Elf64_Ehdr* ehdr));

void init_ftrace(const char *ftrace_file) {
  printf("file :%s\n",ftrace_file);
  ftrace_fp = stdout;
  char str[20];
  char text[1024];
  if (ftrace_file != NULL) {
    fp = fopen(ftrace_file, "rb");
    memset(str,0,sizeof(str));
    memset(text,0,sizeof(text));
    fname = &str[0];
    frc=fread(str, 1, 5, fp);
    if(str[0] != 0x7f || str[1] != 'E' || str[2] != 'L' || str[3] != 'F') {
    printf("%s is not an ELF file%d\n", fname,frc);
    exit(1);
    }
    OStype = str[4] == 1 ? 32 : 64; //判断elf⽂件为32位还是64位
    printf("魔数检验通过，该⽂件为%d位ELF⽂件\n", OStype);
    if(OStype ==64){
        print64(ELF_header_64_parse);
        print64(section_header_64_parse);
        print64(symtab_64_parse);
    }
    Assert(fp, "Can not open elf'%s'", ftrace_file);
    ftrace_fp = fp;
    Log("ftrace is into ysyx %s", ftrace_file ? ftrace_file : "stdout");
  }
}
void print64(void(*fun)(Elf64_Ehdr* ehdr)){
    static Elf64_Ehdr ehdr[1];
    fun(ehdr);
}

//-------------------------------------------------
void ELF_header_64_parse(Elf64_Ehdr* ehdr){
fseek(fp,0,SEEK_SET);
frc=fread(ehdr,sizeof(Elf64_Ehdr),1, fp);
puts("ELF头:");
printf("Magic:\t\t\t");
for(int i =0; i < EI_NIDENT;++i)printf("%02x ", ehdr->e_ident[i]);
    printf("\n类别:\t\t\t");
    switch(ehdr->e_type){
    case 0:printf("未知⽂件类型\n");break;
    case 1:printf("可重定位⽂件\n");break;
    case 2:printf("可执⾏⽂件\n");break;
    case 3:printf("动态链接库⽂件\n");break;
    case 4:printf("Core⽂件\n");break;
    case 0xff00:printf("特定处理器⽂件扩展下边界\n");break;
    case 0xffff:printf("特定处理器⽂件扩展上边界\n");break;
}
printf("处理器体系结构:\t\t");
switch(ehdr->e_machine){
    case 0:printf("未知体系结构\n");break;
    case 1:printf("AT&T WE 32100\n");break;
    case 2:printf("SPARC\n");break;
    case 3:printf("Intel Architecture\n");break;
    case 4:printf("Motorola 68000\n");break;
    case 5:printf("Motorola 88000\n");break;
    case 7:printf("Intel 80860\n");break;
    case 8:printf("MIPS RS3000 Big-Endian\n");break;
    case 10:printf("MIPS RS4000 Big-Endian\n");break;
    case 62:printf("AMD x86-64 architecture\n");break;
}
printf("version:\t\t");
switch(ehdr->e_version){
    case 0:printf("⾮法版本号\n");break;
    case 1:printf("当前版本号\n");break;
}
    printf("⼊⼝虚拟地址:\t\t0x%016lx\n", ehdr->e_entry);
    printf("程序头表偏移量:\t\t0x%08lx\n", ehdr->e_phoff);
    printf("节头表偏移量:\t\t0x%08lx\n", ehdr->e_shoff);
    printf("处理器标志位:\t\t%x\n", ehdr->e_flags);
    printf("ELF⽂件头⼤⼩:\t\t%u bytes\n", ehdr->e_ehsize);
    printf("程序头标每⼀表项⼤⼩:\t%u bytes\n", ehdr->e_phentsize);
    printf("程序头标每⼀表项⼤⼩:\t%u bytes\n", ehdr->e_phentsize);
    printf("程序头表表项数量:\t%u\n", ehdr->e_phnum);
    printf("节头表每⼀表项⼤⼩:\t%u bytes\n", ehdr->e_shentsize);
    printf("节头表表项数量:\t\t%u\n", ehdr->e_shnum);
    printf("字符串表在节头表中索引:\t%u\n", ehdr->e_shstrndx);
}
//----------------------------------------------------------
void symtab_64_parse(Elf64_Ehdr* ehdr){
    Elf64_Sym sym[99];
    int fnum=0;
    fseek(fp,symoff,SEEK_SET);
    frc=fread(sym,sizeof(Elf64_Sym),symcount,fp);
    fseek(fp,shdr[strnum].sh_offset,SEEK_SET);
    frc=fread(strtable,1, shdr[strnum].sh_size, fp);
    printf("--------------------------------------------\n");
    printf("--------value---------size----type-------------------------\n");
    for(int i =0; i <=symcount-1;i++){
        printf("[%02d]\t%08lx\t%ld\t%d\t%s\t\n", i,sym[i].st_value,sym[i].st_size,sym[i].st_info,&strtable[sym[i].st_name]);
        if(sym[i].st_info==18){   
            func[fnum].value=sym[i].st_value;
            func[fnum].fsize=sym[i].st_size;
            strcpy(func[fnum].name,&strtable[sym[i].st_name]);
            if(func[fnum].value==0x80000000)
                fnum--;
            printf("ffnum=%d fnum[%d]:%08lx name:%s\n",func[1].ffnum,fnum,func[fnum].value,func[fnum].name);
            fnum++;
        }
    }
}
//--------------------------------------------------------Q--
void section_header_64_parse(Elf64_Ehdr* ehdr){
    int count = ehdr->e_shnum;
    fseek(fp, ehdr->e_shoff,SEEK_SET);
    frc=fread(shdr,sizeof(Elf64_Shdr), count, fp);
    fseek(fp, shdr[ehdr->e_shstrndx].sh_offset,SEEK_SET);
    frc=fread(strtable,1, shdr[ehdr->e_shstrndx].sh_size, fp);
    printf("There are %d section headers, starting at offset 0x%04lx:\n\n", count, ehdr->e_shoff);
    puts("节头表:");
    printf("[编号]      名称            类型                属性          虚拟地址         偏移量          ⼤⼩           索引值    信息    对齐长度    表项⼤⼩\n");
    for(int i =0; i < count;++i){
        printf("[%02d]\t%s", i,&strtable[shdr[i].sh_name]);
        for(int j =0; j <20-strlen(&strtable[shdr[i].sh_name]);++j){
            putchar(' ');
        }
        switch(shdr[i].sh_type){
            case 0:printf("SHT_NULL\t");break;
            case 1:printf("SHT_PROGBITS");break;
            case 2:printf("SHT_SYMTAB\t");break;
            case 3:printf("SHT_STRTAB\t");break;
            case 4:printf("SHT_RELA\t");break;
            case 5:printf("SHT_HASH\t");break;
            case 6:printf("SHT_DYNAMIC\t");break;
            case 7:printf("SHT_NOTE\t");break;
            case 8:printf("SHT_NOBITS\t");break;
            case 9:printf("SHT_REL\t");break;
            case 10:printf("SHT_SHLIB\t");break;
            case 11:printf("SHT_DYNSYM\t");break;
            case 14:printf("SHT_INIT_ARRAY");break;
            case 15:printf("SHT_FINI_ARRAY");break;
            case 0x70000000:printf("SHT_LOPROC");break;
            case 0x7fffffff:printf("SHT_HIPROC");break;
            case 0x80000000:printf("SHT_LOUSER");break;
            case 0xffffffff:printf("SHT_HIUSER");break;
            case 0x6ffffff6:printf("SHT_GNU_HASH");break;
            case 0x6fffffff:printf("SHT_GNU_versym");break;
            case 0x6ffffffe:printf("SHT_GNU_verneed");break;
        }
        printf("\t0x%lx\t", shdr[i].sh_flags);
        printf("0x%016lx\t", shdr[i].sh_addr);
        printf("0x%08lx\t", shdr[i].sh_offset);
        printf("%4lu bytes\t", shdr[i].sh_size);
        printf("%u\t", shdr[i].sh_link);
        printf("%u\t", shdr[i].sh_info);
        printf("%2lu bytes\t", shdr[i].sh_addralign);
        printf("%4lx\n", shdr[i].sh_entsize);
        if(!strcmp(&strtable[shdr[i].sh_name],".symtab")){
            symoff = shdr[i].sh_offset;
            symcount=shdr[i].sh_size/shdr[i].sh_entsize;//jisuan count!~
            printf("catch symtab!!\n");
            printf("symoff=%d,count=%d\n",symoff,symcount);
        }
        if(!strcmp(&strtable[shdr[i].sh_name],".strtab")){
            stroff = shdr[i].sh_offset;
            strnum = i;
            func[1].ffnum=strnum;
            printf("catch strtab!!\n");
            printf("stroff=%d,strnum=%d\n",stroff,strnum);
        }
    }
}
