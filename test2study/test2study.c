/*Write a single if...else statement in C that checks if an integer num is even or odd and prints the appropriate message.

📌 Example Input:
num = 7

📌 Expected Output:

csharp
Copy
Edit
7 is odd*/
/*#include<stdio.h>
int main(void){
    int input=0;
    printf("Enter number: ");
    scanf("%d",&input);
    if(input%2 ==0){
        printf("The number %d is even", input);
    }else{
        printf("The number %d is odd", input);
    }
    return 0;
}      */
/*Question 5 (Long Answer - 6 marks)
Write a C program that does the following:

Asks the user for a number (n).
Uses a for loop to print all numbers from 1 to n.
If a number is divisible by 3, print "Fizz" instead of the number.
If a number is divisible by 5, print "Buzz" instead of the number.
If a number is divisible by both 3 and 5, print "FizzBuzz".
Otherwise, just print the number.
📌 Example Input:

css
Copy
Edit
Enter a number: 10
📌 Expected Output:

Copy
Edit
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz*/
#include<stdio.h>
int main(void){
    int input=0;
    printf("Enter number: ");
    scanf("%d",&input);
    for(int i=1;i<=input;i++){
        if (i % 3 == 0 && i % 5 == 0) {  // Check for multiples of both 3 and 5 first
            printf("FizzBuzz ");
        }
        else if(i%3==0){
            printf("Fizz ");
        }
        else if(i%5==0){
            printf("Buzz ");
        }
        else{
            printf("%d ",i);

        }
        
       
    }
    return 0;}