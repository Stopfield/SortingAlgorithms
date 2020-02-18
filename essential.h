// Using #include guards. They prevent the file of creating two instances of the macros, functions and classes from being created, which generates some errors
#ifndef ESSENTIAL_H
#define ESSENTIAL_H
    int  arrayLength(int * array, int arraySize);
    void swap(int * a, int * b);
    void printArray(int * array, int arraySize);
#define ARRAY_SIZE(array) ( sizeof(array)/sizeof(array[0]))
#endif /* ESSENTIAL_H */