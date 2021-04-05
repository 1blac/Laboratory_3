#include "pch.h"
#include "CppUnitTest.h"
#include "../laboratory_3.3_D/Student_public.h"
#include "D:\ООП\Лабораторні 3\laboratory_3.3_D\Student_public.cpp"
#include "D:\ООП\Лабораторні 3\laboratory_3.3_D\Man.h"
#include "D:\ООП\Лабораторні 3\laboratory_3.3_D\Man.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student_public y;
			Assert::AreEqual(y.setChangeYearOFstudyPlus(4), true);
		}
	};
}
