// The essential to shorten the code
#include <stdio.h>
#include "essential.h"



int arrayLength(int * array){
    return (sizeof(array) / sizeof(array[0]));
}
 
void swap(int * a, int * b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void printArray(int * array){
    int i = 0;
    printf("  \n{");
    for (i = 0; i < arrayLength(array); i++){
        printf(" %d ,", array[i]);
    }
    printf("  }\n");
}