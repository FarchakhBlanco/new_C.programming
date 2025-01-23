/*
intro to function in c
you cant create a function inside a function


*/
#include <stdio.h>
// function format
// <return type> <function name><argument,input,whatever>
//  {
//     }
// the function doesnt take any arguments and doesnt return any value
void print_course(void){
    printf("you are in COP%d\n", 2271);

}
void draw_circle(void){
printf("   *\n");
puts("*     *");
puts(" *   *");
}

void draw_carrot(void){
    printf("   /\\ \n");
    puts("  /  \\ ");
    puts(" /    \\");

}
void draw_line(void){
    printf(" ------\n");
}
void draw_triangle(void){
    draw_carrot();
    draw_line();
}
void draw_stick_figure(void){

    draw_circle();
    draw_triangle();
    draw_carrot();
}

int main (){
    ///code part 1
    // function call
    print_course();
    draw_circle();
    draw_carrot();
    draw_line();
    draw_carrot();
    draw_triangle();
    draw_stick_figure();


    ///code part 2

    return 0;





}