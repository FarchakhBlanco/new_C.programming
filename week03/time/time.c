/*


*/
#include <stdio.h>
int main(){
int second=0;
int minutes=0;
int remaining_sec=0;
int remaining_min=0;
int hours=0;
//get seconds from input
puts("Enter the number of seconds");
scanf ("%d",&second);
//calculate the number of min
minutes = second/60;
hours = minutes/60;
remaining_min = minutes%60;
remaining_sec = second%60;

printf("%d seconds is %d hours %d minutes %d seconds", second, hours, remaining_min, remaining_sec );
//calculate hours due thursday
return 0;


}