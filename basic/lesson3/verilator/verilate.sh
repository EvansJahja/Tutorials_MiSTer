verilator --trace-fst -cc --public  --compiler msvc --converge-limit 2000  -Wno-WIDTH  -Wno-MODDUP -Wno-UNSIGNED -Wno-CASEINCOMPLETE -Wno-CASEX -Wno-SYMRSVDWORD -Wno-COMBDLY -Wno-INITIALDLY -Wno-BLKANDNBLK -Wno-UNOPTFLAT -Wno-SELRANGE -Wno-CMPCONST -Wno-CASEOVERLAP   -Wno-PINMISSING --top-module top --no-timing -O3 --x-assign 1 --x-initial fast --noassert      lesson3_tb.v ../rtl/vga.v \
    ../rtl/ppu.v \
    ../rtl/bram.sv \
	../rtl/soc.v \
    ../rtl/tv80/tv80_core.v \
	../rtl/tv80/tv80_alu.v \
	../rtl/tv80/tv80_mcode.v \
	../rtl/tv80/tv80_reg.v \
	../rtl/tv80/tv80n.v \
	../rtl/tv80/tv80s.v
