#include<stdio.h>
#include<math.h>
//char store character
void printPrompt(char c);

int getCoefficient(void);

int countDiscriminant(int a, int b, int c);

void printRoots(int a, int b, int c);


int main (void){
printPrompt('a');
int a = getCoefficient();
printPrompt('b');
int b = getCoefficient();
printPrompt('c');
int c = getCoefficient();

printRoots();


    return 0;

}
/************** */
void printPrompt(char ch){
    printf("Emter the coefficient: %c", ch);
}
int getCoefficient(void){
    int coefficient=0;
    scanf("%d", &coefficient);
    return coefficient;
}
int countDiscriminant(int a, int b, int c){
    return (b*b)-(4*a*c);
}

void printRoots(int a, int b, int c){
    int discrim = countDiscriminant(a,b,c);
    if(discrim <0){
        puts("No real rootes");
    }
    if(discrim==0){
        int x = -b / (2*a);
        printf("x=%d\n",x);
    }
    if(discrim>0){
        double x1 = (-b+ sqrt(discrim)) / (2*a);
        double x2 = (-b+ sqrt(discrim)) / (2*a);

        printf("x1=%f,x2=%f\n",x1,x2);
        
    }


}