//<datatype>name[size]; for array
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

//represent the size called symbolic constant
#define SIZE 100

void printArray(int *arr, int SIZE);
void initArrayWithRamdom(int *arr, int SIZE, int left, int right);
// setNegativeToZero();

int main (void){
    srand(time(0));
    /*int m_pr_hr[100];
    m_pr_hr[0] = 50;
    printf("%d",m_pr_hr[0]);
    scanf("%d",&m_pr_hr[0]);
    printf("%d",m_pr_hr[0]);
    */
    int arr[SIZE];
    /*arr[0]=999;
    arr[9]=111;*/
    printf("first %d;Last %d",arr[0],arr[9]);
    //to print all, you need loop
    //for(int i =0;i<SIZE;i+10){
      //  arr[i]=1;/// with this all should be one
    
}

for(int i =0 ; i< SIZE; i++){
    arr[i]=rand() % (20-(20)+1)-20;
}

    //print all
    for(int i=0;i<SIZE;i++){
        printf("%d",arr[i]);
    }
    puts("");

    return 0;
void printArray(int *arr, int SIZE){
    for(int i=0;i<SIZE;i++){
        printf("%d",arr[i]);
    }
    puts("");
    }


    
void initArrayWithRamdom(int *arr, int SIZE, int left, int right){

}

