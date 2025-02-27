#include <stdio.h>
//practice with non function
// function productype
int getFive(void);
// mile to kilometer both ways
void printCourse(int course_number);
// returns an interger and takes no argument
// describe wither
void describeWeather(int temp);


int main(void) {
int temp = 0;
int var = 0;

var=getFive();
printf("enter temp:");

scanf("%d", &temp);
describeWeather(temp);

printf("%d", var);
printCourse (2201);
return 0;

}


//function definition
int getFive(void) {
    int five = 5;
    return five;
}
void printCourse(int course_number) {
    printf("print course # %d", course_number);
}

void describeWeather(int temp){
    if(temp > 70){
        puts("Hot");
    }
    if (temp <=70){
        puts("Cold");

    }
}