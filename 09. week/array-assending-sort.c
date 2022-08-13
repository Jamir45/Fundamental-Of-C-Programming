#include <stdio.h>

int count_swaps(int arr[], int n)
{
    int swaps = 0;

    for(int i=0; i<n-1; i++){
        for(int check=i+1; check<n; check++){
            if(arr[check]<arr[i])
            {
                int temp = arr[check];
                arr[check] = arr[i];
                arr[i] = temp;
                swaps++;
            }
        }
    }

    return swaps;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", count_swaps(arr, n));

    return 0;
}
