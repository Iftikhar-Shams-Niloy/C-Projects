#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("A pointer is just a memory address.\nIt is another kind of data type.\n\n");

    int age = 25;
    int * pAge = &age;
    char name[] = "Niloy";
    char * pName = &name;
    double gpa = 3.84;
    double * pGpa = &gpa;
    float mobile = 1958;
    float * pMobile = &mobile;

    ///When you want to execute a pointer value, It will give you back the address of the stored value.

    printf("The age is : %d\n", age);
    printf("age's memory address : %p\n\n", &age);
    printf("The name is %s\n", name);
    printf("name's memory address : %p\n\n", &name);
    printf("The GPA is :%lf\n",gpa);
    printf("gpa's memory address : %p\n\n", &gpa);
    printf("The Mobile no. is : %f\n" , mobile);
    printf("mobile's memory address : %p\n\n", &mobile);

    return 0;
}
