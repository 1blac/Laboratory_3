#include "pch.h"
#include "CppUnitTest.h"
#include "D:\ООП\Лабораторні 3\Laboratory_3.3_C\Object.h"
#include "D:\ООП\Лабораторні 3\Laboratory_3.3_C\Object.cpp"
#include "../Laboratory_3.3_C/Rational.h"
#include "../Laboratory_3.3_C/Rational_public.h"
#include "../Laboratory_3.3_C/Rational_public.cpp"
#include "../Laboratory_3.3_C/Rational.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33C
{
	TEST_CLASS(UnitTest33C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational F;
			F.setA(69);
			double C = F.getA();
			Assert::AreEqual(C, 69.);
		}
	};
}
