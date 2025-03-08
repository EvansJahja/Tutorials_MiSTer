 #include "pch.h"
#include "CppUnitTest.h"
#include "Vtv80s.h"
#include "Vtv80s___024root.h"
#include "verilated_vcd_c.h"

#include "test_add_a_b_00_00.h"
#include "test_add_a_b_00_01.h"
#include "test_add_a_b_07_01.h"
#include "test_sub_a_b_00_00.h"

// #define TRACE

#include "test.h"

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
		TEST_METHOD(Test_ADD_A_B_1)
		{
			VerilatedContext *ctx = new VerilatedContext();
			Vtv80s* top = new Vtv80s("tv80s");
			ROM(test_add_a_b_00_00)
			int i = 0;

			TEST_BEGIN(Test_ADD_A_B_1)

			while (i<1000 && (i<3 || top->halt_n) ) {
				STEP()
			}

			TEST_END()

			Flags flags = { top->rootp->tv80s__DOT__i_tv80_core__DOT__F };

			Assert::AreEqual((CData) 0x00, top->rootp->tv80s__DOT__i_tv80_core__DOT__ACC);
			Assert::AreEqual(false, flags.CY);
			Assert::AreEqual(false, flags.N);
 
			top->final();
			delete top;
		}

		TEST_METHOD(Test_SUB_A_B_1)
		{
			VerilatedContext *ctx = new VerilatedContext();
			Vtv80s* top = new Vtv80s("tv80s");
			ROM(test_sub_a_b_00_00)
			int i = 0;

			TEST_BEGIN(Test_SUB_A_B_1)
 
			while (i<1000 && (i<3 || top->halt_n) ) {
				STEP()
			}

			TEST_END()

			Flags flags = { top->rootp->tv80s__DOT__i_tv80_core__DOT__F };

			Assert::AreEqual((CData) 0x00, top->rootp->tv80s__DOT__i_tv80_core__DOT__ACC);
			Assert::AreEqual(false, flags.CY);
			Assert::AreEqual(true, flags.N);
 
			top->final();
			delete top;
		}
	};
}
