#include <stdio.h>

int main()
{
    int n = 6;
    int arr[] = {9, 8, 7, 2, 4, 3};
    int temp;
    for(int i=0, j=n; i<j; i++, j--){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }

    return 0;
}
