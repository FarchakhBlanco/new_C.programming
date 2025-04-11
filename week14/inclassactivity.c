#include<stdio.h>

#include<string.h>
//create structure

struct Rectangle{
    // struction members
    double length;
    double width;
};
void getPerimeter(const struct Rectangle *Rect);
void Rectangle( struct Rectangle *Rect);

int main(void){
    double length = 0;
    double width = 0;
    
    printf("enter length: ");
    scanf("%lf", & length);
    printf("enter width: ");
    scanf("%lf", & width);
    struct Rectangle Rect1={.length = length,.width = width};

    struct Rectangle * Rect_ptr = & Rect1;
    getPerimeter(&Rect1);



    return 0;
}
/*void Rectangle( struct Rectangle *Rect){
    double length = 0;
    double width = 0;
    printf("enter length: ");
    scanf("%f", & lendth);
    printf("enter width: ");
    scanf("%f", & width);

}*/
void getPerimeter(const struct Rectangle *Rect){
    double Perimeter = 2 * (Rect->length + Rect->width);
    printf("The perimeter: %f",Perimeter);


}