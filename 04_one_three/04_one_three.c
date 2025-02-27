#include<stdio.h>
// function prototype
void one_thee(void);
void one_three(void){
puts("one");
}
void two(void){
    puts("two");
}
void three(void){
    puts("three");
}
int main(){
    puts("starting now");
    one_three();
    two();
    three();
    puts( "go");

    return 0;
}