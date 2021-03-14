#include "pch.h"
#include "CppUnitTest.h"
#include "../Cursor.h"
#include "D:\Project\OOP\LB2\LB_2.1\Cursor.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Cursor TEST(1,1);
		
			Assert::AreEqual(TEST.Check_1(1), true);
		}
	};
}
