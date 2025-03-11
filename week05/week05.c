#include<stdio.h>
void temperatureDescription(double temp);
void checkRange(int number);
int main (){
    double temp;
    printf("Please Enter body temperature:");
    scanf("%d",temp);
    temperatureDescription();
}
void temperatureDescription(double temp){
    if (tem>101){
        puts("high fever")
    } 
    else if(temp >99){
        puts("low fever")
    }
    else if (temp>97){
        puts("normal")
    }
    else {
        puts("low temp")
    }

}
void checkRange(int number){
    if (number>=0 && number<=10)
}