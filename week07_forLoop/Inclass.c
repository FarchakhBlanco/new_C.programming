//nested loops
#include<stdio.h>
void printTriangleTopLeft(int size);
int main(void){
    //cscan a + intiger
    int n=0;
    do{
        printf("enter integer:");
        scanf("%d",&n);

    } while(n<=0);
    printTriangleTopLeft(n);
    return 0;
}
void printTriangleTopLeft(int size){

    for( int i = 0; i< size; i ++){
        for(int j =0; j<size - i; j++){
            printf("%c", '*');
        }
        puts(" ");
    }
}