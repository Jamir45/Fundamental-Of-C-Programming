#include <stdio.h>

void insetAt(int arr[], int n, int value, int pos)
{
    for(int i=n; pos<i; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
}

int main()
{
    int arr[100]={3,4,5,6,7,8};
    insetAt(arr, 7, 40, 3);

    for(int i=0; i<7; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
