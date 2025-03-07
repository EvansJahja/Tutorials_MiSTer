#include "pch.h"
#include "CppUnitTest.h"
#include "Vtv80s.h"
#include "Vtv80s___024root.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

vluint64_t main_time = 0;	// Current simulation time.
double sc_time_stamp() {	// Called by $time in Verilog.
	return main_time;
}

namespace test
{

	TEST_CLASS(test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vtv80s *top = new Vtv80s("tv80s");
			bool clk = 0;

			const int N = 7;
			char rom[] = { 0x26, 0x11, 0x2e, 0x22, 0xc6, 0x01, 0x76, };

			volatile int H;

			top->wait_n = 1;
			top->int_n = 1;
			top->nmi_n = 1;
			top->busrq_n = 1;
 
			for (int i = 0; i < 10000; i++) {
				top->reset_n = i > 3;

				top->di = rom[top->A];

				H = top->rootp->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__H;



				top->clk = clk;
				top->eval();

				clk = !clk;
			}

			Assert::AreEqual((CData) 0x5c, top->rootp->tv80s__DOT__i_tv80_core__DOT__F);



			top->final();
			delete top;
		}
	};
}
