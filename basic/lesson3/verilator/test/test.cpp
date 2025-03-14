 #include "pch.h"
#include "CppUnitTest.h"
#include "Vtv80s.h"
#include "Vtv80s___024root.h"
#include "verilated_fst_c.h"

#include "test_roms.h"

#define TRACE

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

namespace test
{

	TEST_CLASS(test)
	{
	public:
		TEST_METHOD(Test_ADD_A_B_1)
		{
			VerilatedContext *ctx = new VerilatedContext();
			Vtv80s top = Vtv80s("tv80s");
			ROM(test_add_a_b_00_00)
			int i = 0;

			TEST_BEGIN(Test_ADD_A_B_1)

			while (i<1000 && (i<3 || top.halt_n) ) {
				STEP()
			}

			TEST_END()

			Flags flags = { top.rootp->tv80s__DOT__i_tv80_core__DOT__F };

			Assert::AreEqual((CData) 0x00, top.rootp->tv80s__DOT__i_tv80_core__DOT__ACC);
			Assert::AreEqual(false, flags.CY);
			Assert::AreEqual(false, flags.H);
			Assert::AreEqual(false, flags.N);
 
			top.final();
		}

		TEST_METHOD(Test_ADD_A_B_2)
		{
			VerilatedContext *ctx = new VerilatedContext();
			Vtv80s top = Vtv80s("tv80s");
			ROM(test_add_a_b_0f_01)
			int i = 0;

			TEST_BEGIN(Test_ADD_A_B_1)

			while (i<1000 && (i<3 || top.halt_n) ) {
				STEP()
			}

			TEST_END()

			Flags flags = { top.rootp->tv80s__DOT__i_tv80_core__DOT__F };

			Assert::AreEqual((CData) 0x10, top.rootp->tv80s__DOT__i_tv80_core__DOT__ACC);
			Assert::AreEqual(false, flags.CY);
			Assert::AreEqual(true, flags.H);
			Assert::AreEqual(false, flags.N);
 
			top.final();
		}

		TEST_METHOD(Test_ADD_A_B_3)
		{
			VerilatedContext *ctx = new VerilatedContext();
			Vtv80s top = Vtv80s("tv80s");
			ROM(test_add_a_b_f0_10)
			int i = 0;

			TEST_BEGIN(Test_ADD_A_B_3)

			while (i<1000 && (i<3 || top.halt_n) ) {
				STEP()
			}

			TEST_END()

			Flags flags = { top.rootp->tv80s__DOT__i_tv80_core__DOT__F };

			Assert::AreEqual((CData) 0x00, top.rootp->tv80s__DOT__i_tv80_core__DOT__ACC);
			Assert::AreEqual(true, flags.CY);
			Assert::AreEqual(false, flags.H);
			Assert::AreEqual(false, flags.N);
 
			top.final();
			//delete top;
		}

		TEST_METHOD(Test_SUB_A_B_1)
		{
			VerilatedContext *ctx = new VerilatedContext();
			Vtv80s top = Vtv80s("tv80s");
			ROM(test_sub_a_b_00_00)
			int i = 0;

			TEST_BEGIN(Test_SUB_A_B_1)
 
			while (i<1000 && (i<3 || top.halt_n) ) {
				STEP()
			}

			TEST_END()

			Flags flags = { top.rootp->tv80s__DOT__i_tv80_core__DOT__F };

			Assert::AreEqual((CData) 0x00, top.rootp->tv80s__DOT__i_tv80_core__DOT__ACC);
			Assert::AreEqual(false, flags.CY);
			Assert::AreEqual(true, flags.N);
 
			top.final();
		}

		TEST_METHOD(Test_ADD_HL_1)
		{
			VerilatedContext *ctx = new VerilatedContext();
			Vtv80s top = Vtv80s("tv80s");
			ROM(test_add_hl_1)
			int i = 0;

			TEST_BEGIN(Test_ADD_HL_1)
 
			while (i<1000 && (i<3 || top.halt_n) ) {
				STEP()
			}

			TEST_END()

			Flags flags = { top.rootp->tv80s__DOT__i_tv80_core__DOT__F };

			Assert::AreEqual((CData) 0x00, top.rootp->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__H);
			Assert::AreEqual((CData) 0x00, top.rootp->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__L);
			Assert::AreEqual(false, flags.CY);
			Assert::AreEqual(false, flags.N);
 
			top.final();
		}

		TEST_METHOD(Test_ADD_HL_2)
		{
			VerilatedContext *ctx = new VerilatedContext();
			Vtv80s top = Vtv80s("tv80s");
			ROM(test_add_hl_2)
			int i = 0;

			TEST_BEGIN(Test_ADD_HL_2)
 
			while (i<1000 && (i<3 || top.halt_n) ) {
				STEP()
			}

			TEST_END()

			Flags flags = { top.rootp->tv80s__DOT__i_tv80_core__DOT__F };

			Assert::AreEqual((CData) 0x01, top.rootp->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__H);
			Assert::AreEqual((CData) 0x00, top.rootp->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__L);
			Assert::AreEqual(false, flags.CY);
			Assert::AreEqual(false, flags.N);
 
			top.final();
		}

		TEST_METHOD(Test_ADD_HL_3)
		{
			VerilatedContext *ctx = new VerilatedContext();
			Vtv80s top = Vtv80s("tv80s");
			ROM(test_add_hl_3)
			int i = 0;

			TEST_BEGIN(Test_ADD_HL_3)
 
			while (i<1000 && (i<3 || top.halt_n) ) {
				STEP()
			}

			TEST_END()

			Flags flags = { top.rootp->tv80s__DOT__i_tv80_core__DOT__F };

			Assert::AreEqual((CData) 0x33, top.rootp->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__H);
			Assert::AreEqual((CData) 0x33, top.rootp->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__L);
			Assert::AreEqual(false, flags.CY);
			Assert::AreEqual(false, flags.N);
 
			top.final();
		}

		TEST_METHOD(Test_ADD_HL_4)
		{
			VerilatedContext *ctx = new VerilatedContext();
			Vtv80s top = Vtv80s("tv80s");
			ROM(test_add_hl_4)
			int i = 0;

			TEST_BEGIN(Test_ADD_HL_4)
 
			while (i<1000 && (i<3 || top.halt_n) ) {
				STEP()
			}

			TEST_END()

			Flags flags = { top.rootp->tv80s__DOT__i_tv80_core__DOT__F };

			Assert::AreEqual((CData) 0x11, top.rootp->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__H);
			Assert::AreEqual((CData) 0x11, top.rootp->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__L);
			Assert::AreEqual(true, flags.CY);
			Assert::AreEqual(false, flags.N);
 
			top.final();
		}


	};
}
