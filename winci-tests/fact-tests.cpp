#include "pch.h"
#include "CppUnitTest.h"
#include "../fact.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace wincitests
{
	TEST_CLASS(facttests)
	{
	public:

		TEST_METHOD(TestFactBaseCase)
		{
			Assert::AreEqual(1, fact(0));
			Assert::AreEqual(1, fact(1));
		}

		TEST_METHOD(TestFactRecursiveStep)
		{
			Assert::AreEqual(2, fact(2));
			Assert::AreEqual(6, fact(3));
			Assert::AreEqual(24, fact(4));
		}
	};
}
