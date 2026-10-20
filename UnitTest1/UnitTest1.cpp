#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/layer2.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int num1 = 5;
			int num2 = 10;
			int expectedResult = 15;

			int actualResult = foo(num1, num2);

			Assert::AreEqual(expectedResult, actualResult);
		}
	};
}
