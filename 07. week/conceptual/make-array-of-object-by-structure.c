#include<stdio.h>
#include<math.h>

struct Students
{
    char name[20];
    int roll;
};

// main program
int main()
{
    int n;
    scanf("%d", &n);
    struct Students arr[n];

    for(int i=0; i<n; i++){
        scanf("%s %d", &arr[i].name, &arr[i].roll);
    }

    // printing the students information
    for(int i=0; i<n; i++){
        printf("%s %d\n", arr[i].name, arr[i].roll);
    }

    return 0;
}
