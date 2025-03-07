#include "pch.h"
#include "CppUnitTest.h"
#include "Vtv80s.h"
#include "Vtv80s___024root.h"
#include "verilated_vcd_c.h"

#include "test_add_a_b_00_00.h"
#include "test_add_a_b_00_01.h"
#include "test_add_a_b_07_01.h"

#include "test.h"

#define TRACE

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

vluint64_t main_time = 0;	// Current simulation time.
double sc_time_stamp() {	// Called by $time in Verilog.
	return main_time;
}

union Flags {
	char data;

	struct  {
		char unused: 4;
		bool CY : 1;
		bool H : 1;
		bool N : 1;
		bool Z : 1;
	};
};
/*

			VerilatedVcdC *m_trace = new VerilatedVcdC(); // for tracing
			Verilated::traceEverOn(true);
			top->trace(m_trace, 99);
			m_trace->open("test_method_1.vcd");
 
			m_trace->dump(i);
			m_trace->close();
*/

namespace test
{

	TEST_CLASS(test)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Vtv80s *top = new Vtv80s("tv80s");
 
			bool clk = 0;

			ROM(test_add_a_b_00_01)

			top->wait_n = 1;
			top->int_n = 1;
			top->nmi_n = 1;
			top->busrq_n = 1;
 
			for (int i = 0; i < 10000; i++) {
				top->reset_n = i > 3;

				top->di = rom[top->A % N];
 
				top->clk = clk;
				top->eval();

				clk = !clk;
				if (!top->halt_n)
					break;
			}

			Flags flags{};
			flags.data = ~top->rootp->tv80s__DOT__i_tv80_core__DOT__F;

			Assert::AreEqual((CData) 0x01, top->rootp->tv80s__DOT__i_tv80_core__DOT__ACC);
			//Assert::AreEqual(false, flags.CY);
 
			top->final();
			delete top;
		}
	};
}
