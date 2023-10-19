#include "pch.h"
#include "CppUnitTest.h"
#include "../5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test53
{
	TEST_CLASS(Test53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double test;
			test = f(2);
			Assert::AreEqual(test, 1.01465, 0.00001);
		}
	};
}
