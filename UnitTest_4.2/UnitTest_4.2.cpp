#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_4.2/Human.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest42
{
	TEST_CLASS(UnitTest42)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Human H(65, "Ben");
			string s = "[ Kind: Human, Age: 65, Name: Ben ]";
			Assert::AreEqual(H.Description(), s);

		}
	};
}
