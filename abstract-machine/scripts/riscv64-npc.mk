include $(AM_HOME)/scripts/isa/riscv64.mk
#include $(NPC_HOME)/Makefile

AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
#SO = $(NEMU_HOME)/build/riscv64-nemu-interpreter-so
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

image: $(IMAGE).elf
#	@echo $(ARCH).mk
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin
#	@echo  IMAGE=$(IMAGE).bin

run: image
#	@echo ------ riscv64-npc.mk run-------
  
#	@echo  IMAGE=$(IMAGE).bin
	@$(MAKE) -C $(NPC_HOME) ISA=$(ISA) run IMG=$(IMAGE).bin
  # -d $(SO)
  #ARGS="$(NPCFLAGS)"
#	@echo ------end run-------
#	@echo $(IMAGE) 
#	@echo IMG=$(IMG)
  

#	@echo $(LINKAGE)
