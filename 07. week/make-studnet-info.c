#include<stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[100];
    int roll;
    int class;
    struct Date dob;
};

int main(){
    struct Student stu = {"Jamir Hossain", 23, 2};
    stu.dob.day = 1;
    stu.dob.month = 1;
    stu.dob.year = 2000;

    printf(
       "Name = %s\nRoll = %d\nClass = %d\n",
       stu.name, stu.roll, stu.class
    );
    printf("Date of birth = %d-%d-%d", stu.dob.day, stu.dob.month, stu.dob.year);

    return 0;
}

