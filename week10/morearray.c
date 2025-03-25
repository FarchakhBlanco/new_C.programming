//<datatype>name[size]; for array
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

//represent the size called symbolic constant
#define SIZE 10
void printDoubleArray(int *arr, int size);
//serching in array(linear)
int firstZero(const int *arr, int size);
int lastZero(const int *arr, int size);
int main(void){
   int a[SIZE] = {1,2,3,4,5,6,7,0,9,10};
   printDoubleArray(a, SIZE);
   int first_zero= firstZero(a, SIZE);

   if(first_zero==-1){
    puts("there is no zeros");

   }
   else{
    printf("the index of the first zero is %d\n", first_zero);
   }

    return 0;
}
void printDoubleArray(int *arr, int size){
    for (int i = 0; i < SIZE; i++){
        printf("%d",arr[i]*2);
    }
    puts("");
}
int firstZero(const int *arr, int size){
    for(int i=0;i<SIZE;i++){
        if(arr[i]==0){
            return i;
        }
    }
    return -1;
}
int lastZero(const int *arr, int size){
    for(int i = size - 1; i>= size; i--){
        if(arr[i]==0){
            return i;
        }
    }
}    