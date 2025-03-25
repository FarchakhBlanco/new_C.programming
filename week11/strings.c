#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<ctype.h>

int isLower(char c);
int isAlpha(char c);
int toLower(char c);
int toUpper(char c);
void printInLower(const char *str);
void printInReversedCase(const char *str);


int main (void){

// create a string
char str[] = "Hello CoP2271!";

// print the string
puts("pinting with printf ");
printf("%s\n\n",str);
//2
puts("with loop");
for(int i = 0; str[i] != '\0';i++){
    printf("%c", str[i]);
    putchar(str[i]);
}
puts("");
// printing with puts
puts("printing with puts");
puts(str);
puts("");
 
printf("%d\n\n",isLower(str[0]));
printf("%d\n\n",isAlpha(str[0]));
printf("%d\n\n",isAlpha(str[13]));
puts("Print a string all lower case\n");
printInLower(str);
puts("\n");
puts()

return 0;

}
int isLower(char c){
    if(c>='a' && c<='z'){
        return 1;
    }else{
        return 0;
    }
}
int isUpper(char c){
    if(c>='A' && c<='Z'){
        return 1;
    }else{
        return 0;
    }


}
int isAlpha(char c){
    if(isLower(c)||isUpper(c)){

    }
}
int toLower(char c){
    if(isUpper(c)){
        return c + 32;
    }else{
        return(int) c;
    }
}
int toUpper(char c){
    
}
void printInLower(const char *str){
    for(int i = 0; str[i] != '\0';i++){
        
        putchar(toLower(str[i]));
    }
}
void printInReversedCase(const char *str){
    for(int i = 0; str[i] != '\0';i++){
        if(isUpper(str[i])){
            putchar(toLower(str[i]));
        }else{
            putchar(toUpper(str[i]));
        }

}