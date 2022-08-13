#include <stdio.h>

void change_array(int arr[], int res[], int n)
{
    for(int i=0, j=n-1; i<=j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i=0; i<n; i++){
        res[i]=arr[i];
    }
}


int main(){
    int n;
    scanf("%d", &n);

    int arr[n], res[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    change_array(arr, res, n);

    for(int i=0; i<n; i++){
        printf("%d", res[i]);
    }

    return 0;
}
