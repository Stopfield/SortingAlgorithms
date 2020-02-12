// The essential to shorten the code
#include <stdio.h>
#include "essential.h"

// // Aparently, there is no way to find the number of elements in the array, because the value passed as reference is the adress and not the value
// int arrayLength(int * array){
//     return (sizeof(array) / sizeof(array[0]));
// }

// Change the values
void swap(int* a, int* b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

// Print the array
void printArray(int* array, int arraySize){

    printf("\n{");

    for (int i = 0; i < arraySize; i++){
        printf(" %d", array[i]);  
    }
    
    printf(" }\n");
}