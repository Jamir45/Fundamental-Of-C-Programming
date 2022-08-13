#include <stdio.h>

void desenSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        for(int check=i+1; check<n; check++){
            if(arr[check]>arr[i])
            {
                int temp = arr[check];
                arr[check] = arr[i];
                arr[i] = temp;
            }
        }
    }
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
    desenSort(arr, n);

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
