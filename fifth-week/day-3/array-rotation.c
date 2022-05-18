#include <stdio.h>

//Rotate one time
void rotate(int arr[], int n)
{
    int first = arr[0];
    for(int i=0; i<n; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;
}

//Rotate multiple time
void rotateByK(int arr[], int n, int k)
{
    for(int i=0; i<k; i++){
        rotate(arr, n);
    }
}

int main()
{
    //Initialize array
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);

    rotateByK(arr, len, 3);

    for(int i=0; i<len; i++){
        printf("%d ", arr[i]);
    };
    /*
    //Initialize array
    int arr[] = {1, 2, 3, 4, 5};

    //Calculate length of array arr
    int length = sizeof(arr)/sizeof(arr[0]);
    //n determine the number of times an array should be rotated
    int n = 3;

    //Displays original array
    printf("Original array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    //Rotate the given array by n times toward right
    for(int i = 0; i < n; i++){
        int last;
        //Stores the last element of the array
        last = arr[length-1];

        for(int j = length-1; j > 0; j--){
            //Shift element of array by one
            arr[j] = arr[j-1];
        }
        //Last element of array will be added to the start of array.
        arr[0] = last;
    }
    printf("\n");

    //Displays resulting array after rotation
    printf("Array after right rotation: \n");
    for(int i = 0; i< length; i++){
        printf("%d ", arr[i]);
    }
    */

    return 0;
}
