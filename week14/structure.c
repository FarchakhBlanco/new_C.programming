#include<stdio.h>
#include<string.h>
//create structure
#define NAME_SIZE 30
struct Student{
    // struction members
    char first_name [NAME_SIZE];
    int age;
    double GPA;
};
void printStudentInfo(const struct Student *st);

int main(int argc, char*argv[]){
    // Create the object of type int and call it a
    int a;
    // create an object of another type
    struct Student stud1;
    // initialise the structure member
    strcpy(stud1.first_name, "Nick");
    stud1.age = 19;
    stud1.GPA = 3.25;
    printStudentInfo(&stud1);

    // access the member of the stucture
    printf("First name : \t\t%s\n",stud1.first_name);
    printf("First name : \t\t%d\n",stud1.age);
    printf("First name : \t\t%f\n",stud1.GPA);
    //create a pointer to int
    int b;
    int *b_ptr = &b;
    *b_ptr;
    // create a pointer to a structure
    struct Student * stud_ptr = & stud1;
    // access to the member of the structure through the pointer
    (*stud_ptr).first_name;
    // or 
    stud_ptr->age;
    /// create another fuck face
    struct Student stud2={.first_name = "jack",.age = 20, .GPA = 2.79};
    printStudentInfo(&stud2);





    return 0;
}
void printStudentInfo(const struct Student *st){
    printf("First name : \t\t%s\n",st->first_name);
    printf("AGE : \t\t%d\n", st->age);
    printf("GPA : \t\t%f\n", st->GPA);

}