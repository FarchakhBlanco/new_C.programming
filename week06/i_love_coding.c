#include<stdio.h>

void print(void);
int main(){
void print(void);
int x=4;
int y=0;
int z=0;
int k=2;
y+=x++ +1;
z-= ++y +2;
k*= --z;
printf("%d,%d,%d,%d",x,y,z,k);
return 0;


}
void print(void){
    int c=1;
    while(c<=10){ //condition
        puts("I love coding");
        c=1+c;

    }
}
int sum_1_10(){
    int i=1;
    int sum=0;
    while(i<=10){
        sum+=i;
        i+=1;
        printf("%d sum",sum);
        printf("%d i", i);
    }
}



for (int c=100;c>=2 || )