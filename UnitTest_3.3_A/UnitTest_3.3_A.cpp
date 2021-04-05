#include "pch.h"
#include "CppUnitTest.h"
#include "D:\ООП\Лабораторні 3\Laboratory_3.3_A\Rational.h"
#include "D:\ООП\Лабораторні 3\Laboratory_3.3_A\Rational.cpp"
#include "D:\ООП\Лабораторні 3\Laboratory_3.3_A\Rational_public.h"
#include "D:\ООП\Лабораторні 3\Laboratory_3.3_A\Rational_public.cpp"
#include "D:\ООП\Лабораторні 3\Laboratory_3.3_A\Rational_private.h"
#include "D:\ООП\Лабораторні 3\Laboratory_3.3_A\Rational_private.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational a(1,2);
			double C = a.value();
			Assert::AreEqual(C, 0,5);
		}
	};
}
