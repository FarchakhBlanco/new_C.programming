#include<stdio.h>
int largest(int interger_1,int interger_2,int interger_3);

int main(){
    int interger_1=0;
    int interger_2=0;
    int interger_3 =0;
    puts("Enter the first int:");
    scanf("%d", interger_1);
    puts("Enter the second int:");
    scanf("%d", interger_2);
    puts("Enter the third int:");
    scanf("%d", interger_3)
    int largest();
    return 0;

}
int largest(int interger_1,int interger_2,int interger_3){
    if(interger_1>=interger_2 && interger_1>=interger_3){
        puts( "first interger is the largest %d",interger_1);

    }
    else if (interger_2>=interger_1 && interger_2>=interger_3){
        puts( "second interger is the largest %d",interger_2);
    }
    else{
        puts("3rd interger is the largest %d",interger_3);
    }
}
