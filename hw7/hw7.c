//#include <stdio.h>
/*
int main(void) {
    unsigned int *uPtr;  
    unsigned int value1 = 200000;  
    unsigned int value2 = 0;  
    uPtr=&value1;
    printf("the value of the object pointed to by uPTR : %u\n",*uPtr);
    value2= *uPtr;
    printf("Value2 after assignment: %u\n", value2);
    printf("Address of value1: %p\n", (void*)uPtr);
    printf("The address stored in uPtr: %p\n", (void*)uPtr);

    return 0;
}*//*
#include <stdio.h>
void foo(float *f_ptr);
int main()
{
float i = 10;
float x = 3;

foo(&i);
return 0;
}

void foo(float *p)
{
printf("%.2f\n", *p);
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    
    int num1 = rand() % 11;              
    int num2 = -3 + (rand() % 22);       
    int num3 = -128 + (rand() % 256);    

    
    printf("Random number in range [0, 10]: %d\n", num1);
    printf("Random number in range [-3, 18]: %d\n", num2);
    printf("Random number in range [-128, 127]: %d\n", num3);

    return 0;
}
