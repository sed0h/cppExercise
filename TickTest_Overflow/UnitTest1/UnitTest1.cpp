#include "pch.h"
#include "CppUnitTest.h"
#include "../TickTest_Overflow/StudyUnitClass.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestOutPut)
		{
			StudyUnitClass* study_unit_test_inst = new StudyUnitClass();
			int realValue = study_unit_test_inst->OutPut();
			int expectValue = 11;
			Assert::AreEqual(realValue, expectValue);
		}
	};
}
