#include "pch.h"
#include "CppUnitTest.h"

#include <iostream>
#include <vector>
#include "../AdventOfCode/AoCUtil.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AdventOfCodeTests
{
	TEST_CLASS(AdventOfCodeTests)
	{
	public:
		
		TEST_METHOD(Day1_Testinput)
		{
			std::string testInputFilePath = "C:\\Users\\annjoh1\\source\\repos\\AdventOfCode\\AdventOfCode\\Day1_Test_Input.txt";
			std::vector<int> values = getIntsFromFile(testInputFilePath);
			int counts = countIncrements(values);
			Assert::AreEqual(7,counts);
		}
		TEST_METHOD(Day1)
		{
			std::string testInputFilePath = "C:\\Users\\annjoh1\\source\\repos\\AdventOfCode\\AdventOfCode\\Day1_Input.txt";
			std::vector<int> values = getIntsFromFile(testInputFilePath);
			int counts = countIncrements(values);
			Assert::AreEqual(1162, counts);
		}
	};
}
