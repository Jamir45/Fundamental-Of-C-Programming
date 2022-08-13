#include <stdio.h>

int assenSort(int arr[], int n)
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

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    assenSort(arr, n);

    int sum = 0;
    for(int i=0; i<m; i++){
        if(arr[i] < 0){
            sum += arr[i]*-1;
        }
    }
    printf("%d", sum);

    return 0;
}
