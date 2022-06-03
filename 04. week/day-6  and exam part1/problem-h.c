#include <stdio.h>

int main(){
    int n, d;
    scanf("%d %d", &n, &d);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int length = sizeof(arr)/sizeof(arr[0]);

    //Rotate the given array by n times toward left
    for(int i = 0; i < d; i++){
        int j, first;
        //Stores the first element of the array
        first = arr[0];

        for(j = 0; j < length-1; j++){
            arr[j] = arr[j+1];
        }
        arr[j] = first;
    }

    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
