#include "pch.h"
#include "CppUnitTest.h"
#include "../PR13.1/suma.cpp"
#include "../PR13.1/var.cpp"
#include "../PR13.1/dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace nsVar;
using namespace nsSum;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 2;
			e = 0.01;
			suma();
			double t = log((x + 1) / (x - 1));
			Assert::AreEqual(t, 2*s, 0.01);	
		}
	};
}
