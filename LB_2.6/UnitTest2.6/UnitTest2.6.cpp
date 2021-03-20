#include "pch.h"
#include "CppUnitTest.h"
#include "../Complex.h"
#include "D:\Project\OOP\LB2\LB_2.6\Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest26
{
	TEST_CLASS(UnitTest26)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex i;
			Complex::Pair  h1(4), h2(2);

			Assert::AreEqual(i.Diff_1(h1, h2), 2);
		}
	};
}
