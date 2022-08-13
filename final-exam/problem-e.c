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
    int m;
    scanf("%d", &m);

    for(int i=0; i<m; i++){
        int n;
        scanf("%d", &n);

        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        assenSort(arr, n);

        int res = arr[1]-arr[0];
        for(int i=0; i<n-1; i++){
            int temp = arr[i+1]-arr[i];
            if(res > temp){
                res = temp;
            }
        }
        printf("%d\n", res);
    }

    return 0;
}
