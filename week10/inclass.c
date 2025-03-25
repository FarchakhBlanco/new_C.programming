#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void swapPointers(int* aPtr,int* bPtr); //function protptype

int main (void){
    int luck = 10;
    int *luck_ptr = &luck;
    printf("%d", *luck_ptr);
    return 0;
}
void swapPointers(int* aPtr,int* bPtr){
    int temp = *aPtr;
    *aPtr=*bPtr;
    *b=temp;
    
}