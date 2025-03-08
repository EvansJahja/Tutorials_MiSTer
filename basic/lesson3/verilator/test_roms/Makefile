FILES = test_add_a_b_00_00.h \
		test_add_a_b_00_01.h \
		test_add_a_b_07_01.h \
		test_sub_a_b_00_00.h \

.SUFFIXES: .bin .s 

OUTPUT_DIR=include
BIN_DIR=bin
SRC_DIR= .

all: bin headers

BIN_TARGETS = $(patsubst %.h, $(BIN_DIR)/%.bin, $(FILES))
H_TARGETS = $(patsubst %.h, $(OUTPUT_DIR)/%.h, $(FILES))

bin: $(BIN_TARGETS)
headers: $(H_TARGETS)

{$(BIN_DIR)\}.bin{$(OUTPUT_DIR)}.h:
  - @ mkdir $(OUTPUT_DIR)
  C:\msys64\usr\bin\xxd -n $(*B) -i $< $@


{$(SRC_DIR)\}.s{$(BIN_DIR)}.bin:
  - @ mkdir $(BIN_DIR)
  z88dk-z80asm.exe -m=gbz80 -b $< -o=$(@)

