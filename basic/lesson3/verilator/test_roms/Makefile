.SUFFIXES: .bin .s 

OUTPUT_DIR=include
BIN_DIR=bin
SRC_DIR= .

all: bin headers test_roms.h

BIN_TARGETS = $(patsubst %.s, $(BIN_DIR)/%.bin, $(FILES))
H_TARGETS = $(patsubst %.s, $(OUTPUT_DIR)/%.h, $(FILES))

bin: $(BIN_TARGETS)
headers: $(H_TARGETS)

{$(BIN_DIR)\}.bin{$(OUTPUT_DIR)}.h:
  - @ mkdir $(OUTPUT_DIR)
  C:\msys64\usr\bin\xxd -n $(*B) -i $< $@


{$(SRC_DIR)\}.s{$(BIN_DIR)}.bin:
  - @ mkdir $(BIN_DIR)
  z88dk-z80asm.exe -m=gbz80 -b $< -o=$(@)


H_TARGETS_INCLUDE = $(patsubst %.s, %.h, $(FILES))
test_roms.h: $(H_TARGETS_BASE)
  echo "" > $(OUTPUT_DIR)/test_roms.h
  (for %%F in ($(FILES)) do @echo #include "%%~nF.h") > $(OUTPUT_DIR)/test_roms.h
