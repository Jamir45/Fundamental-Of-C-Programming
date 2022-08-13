#include <stdio.h>
#include <stdbool.h>

void assenSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        for(int check=i+1; check<n; check++){
            if(arr[check]<arr[i])
            {
                int temp = arr[check];
                arr[check] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void makeCopy(int a[], int b[], int n){
    for(int i=0; i<n; i++)
    {
        a[i]=b[i];
    }
}

bool checkSorted(int arr[], int n){
    int newArr[n];
    makeCopy(newArr, arr, n);
    assenSort(newArr, n);

    for(int i=0; i<n; i++)
    {
        if(arr[i] != newArr[i])
        {
            return false;
        }
    }
    return true;
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

    bool ans = checkSorted(arr, n);
    if(ans)
    {
        printf("Yes, the array is sorted\n");
    }
    else
    {
        printf("No, the array now sorted\n");
    }

    return 0;
}
