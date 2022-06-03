#include <stdio.h>

void assendingSort(int n, int arr[])
{
    for(int step=0; step<n; step++){
        int minValue = arr[step];
        int position = step;
        for(int i=step; i<n; i++){
            if(arr[i]<minValue){
                minValue = arr[i];
                position = i;
            }
        }

        // swap value
        int temp = arr[step];
        arr[step] = arr[position];
        arr[position] = temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    assendingSort(n, arr);

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
