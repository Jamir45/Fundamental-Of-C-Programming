#include <stdio.h>

struct Students
{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    struct Students s = {"Jamir", 23, 84};

    printf("%s %d %d", s.name, s.roll, s.marks);

    return 0;
}
