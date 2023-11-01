#include "pch.h"
#include "CppUnitTest.h"
#include "../laba 6.4 int/laba 6.4 int.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab64int
{
	TEST_CLASS(lab64int)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double b[] = { -1, 2, -3, 4, 5 };
			int result = Max(b, 5);
			Assert::AreEqual(5, result);

		}
	};
}
