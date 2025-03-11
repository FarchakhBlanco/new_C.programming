#include<stdio.h>

double sumStudentGradesSentinel(void);
double getGrade(void);

int main(void){
    printf("%.2lf",sumStudentGradesSentinel());


    return 0;
}
double sumStudentGradesSentinel(void){
    double grade= 0;
    double total_grade=0;

    while(grade!= -1){
        //get grade
        printf("Enter a Grade: (-1 to exit)");
        scanf("%lf",&grade);
        total_grade+-grade;
    }
    if (grade < -1){
        printf("Negative number less than one please enter grade: ");
        scanf("%lf", &grade);
        
    }
}
double getGrade(void){
    ///donot return grades <-1 or greater than 100
    double grade;
    do{
        printf("Enter a Grade: (-1 to exit)");
        scanf("%lf",&grade);
        if(grade<-1 || grade>100){
            puts("")
        }

    }while(grade<-1 || grade>100);
    

        return grade;
}
