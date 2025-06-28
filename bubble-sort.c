#include <stdio.h>

int *bubble_sort(int unsortedArr[], int unsortedArrSize, int *sortedArr);

int main(void) {
	int unsortedArr[] = { 6, 8, 7, 0, 1, 5, 9, 11, 10, 3, 12, 2, 4 };
	int unsortedArrSize = sizeof(unsortedArr) / sizeof(unsortedArr[0]);
	int sortedArrSize = unsortedArrSize;
	int emptySortedArr[sortedArrSize];
	int *sortedArr = bubble_sort(unsortedArr, unsortedArrSize, emptySortedArr);

	for (int i = 0; i < sortedArrSize; i++) {
		int number = sortedArr[i];
		printf("Element %d: %d\n", i + 1, number);
	}

	return 0;
}

int *bubble_sort(int unsortedArr[], int unsortedArrSize, int *sortedArr) {
	for (int i = 0; i < unsortedArrSize; i++) {
		int currNumPointer = 0;
		int nextNumPointer = currNumPointer + 1;

		while (nextNumPointer < unsortedArrSize - i) {
			int currNum = unsortedArr[currNumPointer];
			int nextNum = unsortedArr[nextNumPointer];

			if (currNum > nextNum) {
				unsortedArr[currNumPointer] = nextNum;
				unsortedArr[nextNumPointer] = currNum;
			}

			currNumPointer++;
			nextNumPointer++;
		}
	}

	int sortedArrSize = unsortedArrSize;
	for (int i = 0; i < sortedArrSize; i++) {
		sortedArr[i] = unsortedArr[i];
	}

	return sortedArr;
}
