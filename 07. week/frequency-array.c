#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;
    for(int i=0; i<n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        };
    }

    int count[10] = {0};
    for(int i=0; i<10; i++)
    {
        int val = arr[i];
        count[val]++;
    }

    for(int i=0; i<10; i++)
    {
        printf("Number %d count %d\n", i, count[i]);
    }

    return 0;
}
