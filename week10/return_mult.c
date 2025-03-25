#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int splitDigits(int n, int *tens, int *ones);
void swapPointers(int* aPtr,int* bPtr); //function protptype
//to do
void sumAndAvg(double d1,double d2, double*sum, double*avg);

int main (void){
    int n = 42;
    int tens=0;
    int ones = 0;
    int luck=0;
    double d1=5;
    double d2=10;
    double sum;
    double avg;
    sumAndAvg(d1,d2,&sum,&avg);
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", avg);
    splitDigits(n, &tens, &ones);
    printf("%d is %d tens and %d ones",n,tens,ones);
    int *luck_ptr = &luck;
    printf("%d", *luck_ptr);
    return 0;
}
int splitDigits(int n, int *tens, int *ones){
    if(n<10 || n>99){
        return 1;
 
    }
    *tens = n/10;
    *ones = n%10;

    return 0;

  

}
void sumAndAvg(double d1,double d2, double*sum, double*avg){
    *sum= d1+d2;
    *avg = *sum/2;
    
}