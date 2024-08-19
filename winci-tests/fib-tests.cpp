#include "pch.h"
#include "CppUnitTest.h"
#include "../fib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace wincitests
{
	TEST_CLASS(fibtests)
	{
	public:
		
		TEST_METHOD(TestFibBaseStep)
		{
			Assert::AreEqual(0, fib(0));
			Assert::AreEqual(1, fib(1));
		}

		TEST_METHOD(TestFibRecursiveStep)
		{
			Assert::AreEqual(1, fib(2));
			Assert::AreEqual(2, fib(3));
			Assert::AreEqual(3, fib(4));
			Assert::AreEqual(5, fib(5));
			Assert::AreEqual(8, fib(6));
			Assert::AreEqual(13, fib(7));
		}
	};
}
