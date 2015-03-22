#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Tut4\Tut4.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(PushTest)
		{
			CTut4 get;

			Assert::AreEqual(1, get.push(1));
		}

		TEST_METHOD(PopTest)
		{
			CTut4 get;

			Assert::AreEqual(1, get.pop());
		}

		TEST_METHOD(PeekTest)
		{
			CTut4 get;

			Assert::AreEqual(1, get.peek());
		}
		TEST_METHOD(isFullTest)
		{
			CTut4 get;

			Assert::AreEqual(1, get.isFull());
		}
		TEST_METHOD(isEmptyTest)
		{
			CTut4 get;
	
			Assert::IsNotNull( get.isEmpty());
		}
		


	};
}