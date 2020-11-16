#include "pch.h"
#include "CppUnitTest.h"
#include "../AISTD_2.0/AiSTD2.h"
#include "../AISTD_2.0/AISTD_2.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AISTD2Test
{
	TEST_CLASS(AISTD2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		}
		int* arr; char* arr2;
		TEST_METHOD_INITIALIZE(setUp)
		{
			arr = new int[10]; 
			arr2 = new char[10];
		}
		TEST_METHOD_CLEANUP(cleanUp) {
			delete arr; delete arr2;
		}

		TEST_METHOD(binarySearch)
		{
			arr[0] = 1;
			arr[1] = 2;
			arr[2] = 3;
			arr[3] = 4;
			arr[4] = 5;
			arr[5] = 6;
			arr[6] = 7;
			arr[7] = 8;
			arr[8] = 9;
			arr[9] = 10;
			Assert::IsTrue(BinarySearch(arr, 10, 5), 4);
		}

		TEST_METHOD(quicksort)
		{
			arr[0] = 1;
			arr[1] = 3;
			arr[2] = 2;
			arr[3] = 4;
			arr[4] = 5;
			arr[5] = 8;
			arr[6] = 6;
			arr[7] = 7;
			arr[8] = 10;
			arr[9] = 9;
			QuickSort(arr, 10);
			Assert::AreEqual(arr[2], 3);
		}
		
		TEST_METHOD(bubbleSort)
		{
			arr[0] = 1;
			arr[1] = 3;
			arr[2] = 2;
			arr[3] = 4;
			arr[4] = 5;
			arr[5] = 8;
			arr[6] = 6;
			arr[7] = 7;
			arr[8] = 10;
			arr[9] = 9;
			InsertionSort(arr, 10);
			Assert::AreEqual(arr[2], 3);
		}
		

		TEST_METHOD(bogo)
		{
			arr[0] = 1;
			arr[1] = 3;
			arr[2] = 2;
			arr[3] = 4;
			arr[4] = 5;
			arr[5] = 8;
			arr[6] = 6;
			arr[7] = 7;
			arr[8] = 10;
			arr[9] = 9;
			BogoSort(arr, 10);
			Assert::AreEqual(arr[2], 3);
		}
		
		TEST_METHOD(counting)
		{
			arr2[0] = 'y';
			arr2[1] = 'w';
			arr2[2] = 'a';
			arr2[3] = 's';
			arr2[4] = 'd';
			arr2[5] = 'z';
			arr2[6] = 'x';
			arr2[7] = 'u';
			arr2[8] = 'b';
			arr2[9] = 'w';
			CountingSort(arr2, 10);
			Assert::AreEqual((int)arr2[1], (int)'b');
		}
		
	};

}
