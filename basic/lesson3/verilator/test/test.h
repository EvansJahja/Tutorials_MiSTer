#pragma once

#include "verilated_vcd_c.h"

#define ROM(X) const int N = X ## _len; unsigned char* rom = X;

#ifdef TRACE
#define STEP() \
	top->wait_n = 1; \
	top->int_n = 1; \
	top->nmi_n = 1; \
	top->busrq_n = 1; \
	top->reset_n = i > 3; \
	top->di = rom[top->A % N]; \
	top->clk = !top->clk; \
	top->eval(); \
	m_trace->dump(i); \
	i++;
#else
#define STEP() \
	top->wait_n = 1; \
	top->int_n = 1; \
	top->nmi_n = 1; \
	top->busrq_n = 1; \
	top->reset_n = i > 3; \
	top->di = rom[top->A % N]; \
	top->clk = !top->clk; \
	top->eval(); \
	i++;
#endif

#ifdef TRACE
#define TEST_BEGIN(X) \
	VerilatedVcdC *m_trace = new VerilatedVcdC(); \
	ctx->traceEverOn(true); \
	top->trace(m_trace, 99); \
	m_trace->open(#X ".vcd");
#else
#define TEST_BEGIN(X)
#endif

#ifdef TRACE
#define TEST_END() \
	m_trace->close();
#else
#define TEST_END()
#endif
  


