#include <stdio.h>
//practice with non function
// function productype
int getFive(void);
// returns an interger and takes no argument
int main(){
int var;
var=getFive();
printf("%d", var);
return 0;

}
//function definition
int getFive(void) {
    int five = 5;
    return 5;
}