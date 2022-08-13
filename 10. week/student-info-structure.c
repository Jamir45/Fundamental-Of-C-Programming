#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Student
{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    FILE *inputFile = fopen("student-info-input.txt", "r");
    FILE *outputFile = fopen("student-info-output.txt", "w");
    if(inputFile == NULL)
    {
        printf("Input file not found\n");
        return 0;
    }

    int n;
    fscanf(inputFile, "%d", &n);
    struct Student s[n];
    struct Student c[n];
    int count = 0;

    for(int i=0; i<n; i++)
    {
        fscanf(inputFile, "%s %d %d", &s[i].name, &s[i].roll, &s[i].marks);
    }

    // counting the student total marks
    for(int i=0; i<n; i++)
    {
        bool found = false;
        for(int j=0; j<count; j++)
        {
            if(s[i].roll == c[j].roll)
            {
                c[j].marks += s[i].marks;
                found = true;
            }
        }

        if(found == false)
        {
            strcpy(c[count].name, s[i].name);
            c[count].roll = s[i].roll;
            c[count].marks = s[i].marks;
            count++;
        }
    }

    // selection sorting
    for(int i=0; i<count-1; i++)
    {
        for(int j=i+1; j<count; j++)
        {
            if(c[i].marks > c[j].marks)
            {
                struct Student temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    for(int i=0; i<count; i++)
    {
        fprintf(outputFile, "%s %d %d\n", c[i].name, c[i].roll, c[i].marks);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
