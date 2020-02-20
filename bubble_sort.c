#include <stdio.h>
#include "essential.h"

void* bubbleSort(int* array, int arraySize){

	// +--------------------------+
	// |First version of the code |
	// +--------------------------+
	for (int i = 0; i < arraySize; i++){
		for(int j = 0; j < arraySize; j++){
			// If the value with the smallest index is greater than the one with greater index...
			if (!(array[j] < array[j + 1])){
				// Swap the values!
				swap(&array[j], &array[j + 1]);
			}
		}
	}
	

	// +--------------------------+
	// |Second version of the code|
	// +--------------------------+

	// Verify if there was any kind of swapping
	int wasSwapped = 0;
	
	// While swapping exists, continue to sort!
	while (!wasSwapped){

		wasSwapped = 0;

		// Swap what is needed and change the "wasSwapped" value
		for(int j = 0; j < arraySize; j++){
			// If the value with the smallest index is greater than the one with greater index...
			if (!(array[j] < array[j + 1])){
				// Swap the values!
				swap(&array[j], &array[j + 1]);
				// If there was a swap
				wasSwapped = 1;
			}
		}
	}
}

int main(){
	int array[] = {5, 3, 2, 7, 9, 10};
	
	// There is no function to know the number of elements of an array in C, so we do that!
	// See the essential.h file to see the macro
	// int arraySize = sizeof(array)/sizeof(array[0]);

	// We will use the macro
	int arraySize = ARRAY_SIZE(array);

	bubbleSort(array, arraySize);
	printArray(array, arraySize);

	return 0;
}
