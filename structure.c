#include<stdio.h>
#include<string.h>
// user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 7.5;
    // s1.name = "vikram"
    strcpy(s1.name, "vikram");

    printf("student name = %s\n",s1.name);
    printf("student roll = %d\n",s1.roll);
    printf("student cgpa = %f\n",s1.cgpa);

    struct student s2;
    s2.roll = 1664;
    s2.cgpa = 7.5;
    // s2.name = "vikram"
    strcpy(s2.name, "vikram");

    printf("student name = %s\n",s2.name);
    printf("student roll = %d\n",s2.roll);
    printf("student cgpa = %f\n",s2.cgpa);

    struct student s3;
    s3.roll = 1664;
    s3.cgpa = 7.5;
    // s3.name = "vikram"

    strcpy(s3.name, "vikram");

    printf("student name = %s\n",s3.name);
    printf("student roll = %d\n",s3.roll);
    printf("student cgpa = %f\n",s3.cgpa);

    return 0;
}