#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;

};



int main()
{

    printf("\n\n Stuct is a data structure,\nthat can store different kind of data types.\n\n");


        struct Student r10748 ;
    r10748.age = 20;
    r10748.gpa = 4.89;
    strcpy( r10748.name, "Niloy");
    strcpy( r10748.major,"CSE");

        struct Student r10750 ;
    r10750.age = 19;
    r10750.gpa = 5.00;
    strcpy( r10750.name, "Ismail");
    strcpy( r10750.major,"Automobiles");

        struct Student r16969 ;
    r16969.age = 20;
    r16969.gpa = 4.79;
    strcpy( r16969.name, "Khaled");
    strcpy( r16969.major,"Law");

        struct Student r10749 ;
    r10749.age = 20;
    r10749.gpa = 4.58;
    strcpy( r10749.name, "Akash");
    strcpy( r10749.major,"Business");

        struct Student r10747 ;
    r10747.age = 20;
    r10747.gpa = 5.00;
    strcpy( r10747.name, "Ahsan");
    strcpy( r10747.major,"Physics");


    printf("%lf", r10747.gpa);
    printf ("\n\n");


    return 0;
}
