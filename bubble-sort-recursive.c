#include <stdio.h>

int *bubble_sort_recursive(int unsortedArr[], int unsortedArrSize, int *sortedArr, int index);

int main(void) {
	int unsortedArr[] = { 6, 8, 7, 0, 1, 5, 9, 11, 10, 3, 12, 2, 4 };
	int unsortedArrSize = sizeof(unsortedArr) / sizeof(unsortedArr[0]);
	int sortedArrSize = unsortedArrSize;
	int emptySortedArr[sortedArrSize];
	int startIndex = 0;
	int *sortedArr = bubble_sort(unsortedArr, unsortedArrSize, emptySortedArr, startIndex);

	for (int i = 0; i < sortedArrSize; i++) {
		int number = sortedArr[i];
		printf("Element %d: %d\n", i + 1, number);
	}

	return 0;
}

int *bubble_sort_recursive(int unsortedArr[], int unsortedArrSize, int *sortedArr, int index) {
	if (index >= unsortedArrSize) {
		for (int i = 0; i < unsortedArrSize; i++) {
			sortedArr[i] = unsortedArr[i];
		}

		return sortedArr
	}

	int currNumIndex = 0;
	int nextNumIndex = currNumIndex + 1;

	while (nextNumIndex < unsortedArrSize - index) {
		int currNum = unsortedArrSize[currNumIndex];
		int nextNum = unsortedArrSize[nextNumIndex];

		if (currNum > nextNum) {
			unsortedArr[currNumIndex] = nextNum;
			unsortedArr[nextNumIndex] = currNum;
		}

		currNumIndex++;
		nextNumIndex++;
	}

	bubble_sort_recursive(unsortedArr, unsortedArrSize, sortedArr, index + 1);
}
