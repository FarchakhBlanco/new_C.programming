
Page
1
of 2
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 1000
void getString(char *str);
void getString2(char *str);
void getString3(char *str);
bool hasSpaces(const char *str);
// TODO
/*
Hello, 5 -> HelloHelloHelloHelloHello
*/
void makeDuplicates(char *str, int n);
// TODO
// Check whether the given string is valid
/*
Has at least one upper and one lower case
Has at least one digit
Has no spaces or tabs
Has {*, $, % , &}
The length is not less than 8
*/
int main(void) {
char str1[SIZE];
char str2[SIZE];
getString3(str1);
getString2(str2);
printf("The first string is \"%s\"\n", str1);
printf("The second string is \"%s\"\n", str2);
// Copy one string into another
strcpy(str1, str2);
printf("The first string is \"%s\"\n", str1);
printf("The second string is \"%s\"\n", str2);
// Add one string to the other
strcat(str1, str2);
printf("The first string is \"%s\"\n", str1);
printf("The second string is \"%s\"\n", str2);
return 0;
}
void getString(char *str) {
puts("Enter a string: ");
scanf("%s", str);
}
void getString2(char *str) {
puts("Enter a string: ");
fgets(str, SIZE - 1, stdin); // stdin - standard input (keyboard)
// Remove the ending \n
int last_character = strlen(str) - 1; // index of the last character
str[last_character] = '\0';
}
void getString3(char *str) {
puts("Enter a string: ");
int i = 0;
char c = getchar(); // getchar scans one character
while (i < SIZE - 1 && c != '\n') {
str[i] = c;
i++;
c = getchar();
}
str[i] = '\0';
}
bool hasSpaces(const char *str) {
// Check does the string have spaces
if (strchr(str, ' ') == 0) {
puts("No spaces");
return false;
}
else {
puts("There is a space");
return true;
}
}