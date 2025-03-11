#include<stdio.h>

int main (void){
    char input;
    //get upper case char
    do{
        printf("Enter an uppercase character:")
        scanf("%c", &input);

    } while(input<'A'|| input>'Z');
    int number;
    do{
        printf("enter number:");
        scanf("%d", &number);
    } while(number<=0);
    for(int input = 1; input <=number; input++){
        printf("%c",input);
    }
}