#include <stdio.h>
#include <string.h>

#define NAME_SIZE 30
#define STREET_SIZE 30
#define CITY_SIZE 30
#define CLASS_SIZE 30

// Create the address structure
typedef struct {
    char street[STREET_SIZE];
    char city[CITY_SIZE];
    int zipcode;
} Address;

// Create the student structure
struct Student {
    char first_name[NAME_SIZE];
    int age;
    double GPA;
    Address home_address;
};



typedef struct{
    int n_students;
    struct Student roaster[CLASS_SIZE];


}Class;
// Function declarations
struct Student createStudent(char *name, int age, char *street, char *city, int zip);
void printStudentInfo(const struct Student *st);
void printAddress(const Address *adr);
void printClassRoaster(const Class *cl);
void addStudent(Class *cl, const struct Student *st);

int main(void) {
    // Create an address object
    Address adr = {.city = "Lakeland", .street = "123 Main", .zipcode = 33545};
    printAddress(&adr);

    // Create and initialize a student
    struct Student st1 = {.first_name = "Mike", .age = 20, .GPA = 3.5, .home_address = {.city = "Orlando", .street = "Disney", .zipcode = 35533}};
    printStudentInfo(&st1);

    // Create another student using the function
    struct Student st2 = createStudent("Albert", 35, "Orlando", "Disney", 33325);
    printStudentInfo(&st2);
    // create class object
    Class COP2271 ={.n_students=2,.roaster={st1, st2}};
    struct Student st3 = createStudent("Diego", 31, "Orlando", "Disney", 33325);
    COP2271.n_students = 3;
    COP2271.roaster[2] = st3;
    printClassRoaster(&COP2271);


    return 0;
}

void printStudentInfo(const struct Student *st) {
    printf("First name : \t\t%s\n", st->first_name);
    printf("AGE : \t\t\t%d\n", st->age);
    printf("GPA : \t\t\t%.2f\n", st->GPA);
    printAddress(&st->home_address);
}

void printAddress(const Address *adr) {
    printf("Street: %s\nCity: %s\nZipcode: %d\n", adr->street, adr->city, adr->zipcode);
}

struct Student createStudent(char *name, int age, char *street, char *city, int zip) {
    struct Student st;
    strcpy(st.first_name, name);
    st.age = age;
    st.GPA = 0.0;  // default GPA
    strcpy(st.home_address.street, street);
    strcpy(st.home_address.city, city);
    st.home_address.zipcode = zip;
    return st;
}
void printClassRoaster(const Class *cl){
    for(int i=0; i<cl->n_students;i++){
        printStudentInfo(&cl->roaster[i]);
    }

}
