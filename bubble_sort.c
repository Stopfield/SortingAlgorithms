#include <stdio.h>
#include "essential.h"

// The bubble sort function
int* bubbleSort(int* array, int arraySize){

	// For each element of the array...
	for (int i = 0; i < arraySize; i++){
		for(int j = 0; j < arraySize; j++){
			// If the value with the smallest index is greater than the one with greater index...
			if (!(array[j] < array[j + 1])){
				// Swap the values!
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

int main(){
	int array[] = {5, 3, 2, 7, 9, 10};
	
	// There is no function to know the number of elements of an array in C, so we do that
	int arraySize = sizeof(array)/sizeof(array[0]);

	bubbleSort(array, arraySize);
	printArray(array, arraySize);

	return 0;
}
