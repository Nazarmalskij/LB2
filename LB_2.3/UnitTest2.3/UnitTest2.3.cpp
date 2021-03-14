#include "pch.h"
#include "CppUnitTest.h"
#include "../FuzzyNumber.h"
#include "D:\Project\OOP\LB2\LB_2.3\FuzzyNumber.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest23
{
	TEST_CLASS(UnitTest23)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber A(3, 4, 6),
				B(1,2 ,7 ),
				C(0, 0, 0);

			C = A - B;
			Assert::AreEqual(C.GetX(), -4.0);
		}
	};
}
