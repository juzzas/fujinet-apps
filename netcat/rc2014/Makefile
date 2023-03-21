TARGET_EXEC ?= netcat.com

BUILD_DIR ?= ./build
SRC_DIRS ?= ./src

LIB_PROJECT := @../../../fujinet-rc2014/lib/driver_rc2014_spi.lst @../../../fujinet-rc2014/lib/lib_rc2014_cpm.lst
LIB_PROJECT_INC := ../../../fujinet-rc2014/lib/include

CC=zcc
AS=zcc

SRCS := $(shell find $(SRC_DIRS) -name *.cpp -or -name *.c -or -name *.asm)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

#CFLAGS=+rc2014 -subtype=cpm -DBUILD_RC2014
#LDFLAGS=+rc2014 -subtype=cpm -create-app -o$(TARGET_EXEC)
#ASFLAGS=+rc2014 -subtype=cpm

CFLAGS=-v +rc2014 -subtype=cpm -DBUILD_RC2014 -I$(LIB_PROJECT_INC) -clib=sdcc_iy -pragma-redirect:fputc_cons=fputc_cons_generic
LDFLAGS=-v +rc2014 -subtype=cpm -create-app -I$(LIB_PROJECT_INC) -o$(TARGET_EXEC)
ASFLAGS=-v +rc2014 -subtype=cpm

INC_DIRS := $(shell find $(SRC_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) $(LIB_PROJECT)

# c source
$(BUILD_DIR)/%.c.o: %.c
	$(MKDIR_P) $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

# asm source
$(BUILD_DIR)/%.asm.o: %.asm
	$(MKDIR_P) $(dir $@)
	$(AS) $(ASFLAGS) -c $< -o $@

.PHONY: clean

clean:
	$(RM) -r NETCAT* netcat* $(BUILD_DIR)

-include $(DEPS)

MKDIR_P ?= mkdir -p
