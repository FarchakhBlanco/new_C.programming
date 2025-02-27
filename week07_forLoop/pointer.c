#include<stdio.h>

void setToZero(int *n);
double productPointers(double *p1, double *p2);

int main(void){
    int luck = 100;
    printf("%d\n", luck);
    //modify
    luck+=10;

    printf("the address of luck is %p\n",&luck);

    // Pointer varible- that stores memory addresses
    // create a pointer
    //<datatype>*pointerName;
    int *luck_ptr = &luck;
    // lets access the data the pointer is pointing to
    //* - dereferencing operator
    *luck_ptr=500;
    printf(" dereference luck_ptr %d\n", *luck_ptr);
    // passing- by references
    setToZero(&luck);
    printf(" the value of luck after setting it to zero is %d\n", luck);
    //////////////////
    //test pointer
    double d1 = 2.3;
    double d2 = 12.3;
    printf("%lf\n", productPointers(&d1, &d2));

    return 0;
}
void setToZero(int *n){
    *n=0;
}
double productPointers(double *p1, double *p2){
    return *p1 * *p2;


}
