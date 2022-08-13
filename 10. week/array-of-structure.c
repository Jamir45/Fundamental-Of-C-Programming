#include <stdio.h>

struct Student
{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Student s[n];

    for(int i=0; i<n; i++)
    {
        scanf("%s %d %d", &s[i].name, &s[i].roll, &s[i].marks);
    }

    int lowest = s[0].marks, highest = 0;
    struct Student low = s[0], high;

    for(int i=0; i<n; i++)
    {
        if(lowest > s[i].marks){
            lowest = s[i].marks;
            low = s[i];
        }
        if(highest < s[i].marks){
            highest = s[i].marks;
            high = s[i];
        }
    }

    printf("Highest - %s %d %d\n", high.name, high.roll, high.marks);
    printf("Lowest - %s %d %d\n", low.name, low.roll, low.marks);

    return 0;
}
