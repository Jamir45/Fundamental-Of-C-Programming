#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    // array initializing
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    /*
    // array reversing first way
    int reversed[n];
    for(int i=0; i<n; i++){
        reversed[n-1-i] = arr[i];
    }
    */

    // array reversing second way
    for(int i=0, j=n-1; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // print output
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
