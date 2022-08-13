#include <stdio.h>

void deleteAt(int arr[], int n, int pos)
{
    for(int i=pos; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=0;
}

int main()
{
    int arr[6]={3,4,5,6,7,8};
    deleteAt(arr, 6, 3);

    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
