#include "pch.h"
#include "CppUnitTest.h"
#include "../Yes/Yes.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitYes
{
	TEST_CLASS(UnitYes)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const auto [max, min, devider] = FindDevider(1, 20);
			Assert::AreEqual(20, max);
			Assert::AreEqual(12, min);
			Assert::AreEqual(6, devider);
		}
	};
}