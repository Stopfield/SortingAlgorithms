// Using #include guards. They prevent the file of creating two instances of the macros, functions and classes from being created, which generates errors
#ifndef ESSENTIAL_H
#define ESSENTIAL_H
    int  arrayLength(int * array, int arraySize);
    void swap(int * a, int * b);
    void printArray(int * array, int arraySize);
#endif /* ESSENTIAL_H */