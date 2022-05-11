#include <stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i;

    // element and position
    int element = 25;
    int pos = 3;

    // print the original array
    for (i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    // shift elements forward
    for (i=len; i>=pos; i--){
        arr[i] = arr[i-1];
    }

    // insert element at pos
    arr[pos-1] = element;

    // print the updated array
    int newLen = len+1;
    for (i=0; i<newLen; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
