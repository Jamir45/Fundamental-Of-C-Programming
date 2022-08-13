#include <stdio.h>

double make_average(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    double aver = (double) sum/n;
    return aver;
}

int main(){
    int arr[] = {9, 8, 7, 6, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("%.2lf", make_average(arr, n));

    return 0;
}
