// The essential to shorten the code
#include "essential.h"

int arrayLenght(float * array){
    return sizeof(array)/sizeof(array[0]);
}
 
void swap(int * a, int * b){
    int aux = a;
    a = b;
    b = aux;
}