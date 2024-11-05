#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab9.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a;
			int x = 3;
			int y = 3;
			a = SQR(x, y);

			Assert::AreEqual(a, 0);
		}
	};
}
