#include <stdio.h>
#include "essential.h"


int * bubbleSort(int * array);

int main(){




	int array[] = {5, 3, 2, 7, 9, 10};
	printf("\n\n\n%d\n\n", arrayLength(array));
	// bubbleSort(array);
	// printArray(array);

	return 0;
}

int * bubbleSort(int * array){
	int i = 0;

	for(i = 0; i < arrayLength(array); i++){
		if (!(array[i] < array[i++])){
			swap(&array[i], &array[i++]);
		}
	}
}
