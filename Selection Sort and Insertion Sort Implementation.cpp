#include "Selection Sort and Insertion Sort.h"

void main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	insertionSort(arr, n);

	//selectionSort(arr, n);
	
	//printf("Sorted array: \n");
	printArray(arr, n);


}