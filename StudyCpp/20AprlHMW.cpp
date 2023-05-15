#include <iostream>

void actionElemArr(const int* array, const int& SIZE, int* ptrSumElem, int* ptrMultElem) {
	int sumElem = 0;
	int multElem = 1;

	for (size_t i = 0; i < SIZE; ++i) {
		sumElem += array[i];
		multElem *= array[i];
	}

	*ptrSumElem = sumElem;
	*ptrMultElem = multElem;
}

void actionElemArr(const int* array, const int& SIZE, int* ptrCountNegElem, int* ptrCountPositElem, int* ptrCountZeroElem) {
	int countNegElem = 0;
	int CountPositElem = 0;
	int CountZeroElem = 0;

	for (size_t i = 0; i < SIZE; ++i)
	{
		if (array[i] < 0)
			++countNegElem;
		else if (array[i] > 0)
			++CountPositElem;
		else
			++CountZeroElem;
	}

	*ptrCountNegElem = countNegElem;
	*ptrCountPositElem = CountPositElem;
	*ptrCountZeroElem = CountZeroElem;
}