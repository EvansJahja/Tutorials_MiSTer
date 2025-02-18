cmake_minimum_required(VERSION 3.20)

project(cmake_example)
find_package(verilator)
add_library(my_target STATIC)
verilate(my_target TOP_MODULE top SOURCES lesson3_tb.v ../rtl/vga.v ../rtl/bram.sv ../rtl/soc.v 
../rtl/tv80/tv80_core.v 
	../rtl/tv80/tv80_alu.v 
	../rtl/tv80/tv80_mcode.v 
	../rtl/tv80/tv80_reg.v 
	../rtl/tv80/tv80n.v 
	../rtl/tv80/tv80s.v 
	VERILATOR_ARGS

	--no-timing
	-Wno-PINMISSING
	-CFLAGS -DVL_TIME_CONTEXT
	--public-flat-rw
	-cc
)