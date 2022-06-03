#include <stdio.h>

int* returnArray(int n)
{
    int *res = (int*) malloc((n*sizeof(int)));

    return res;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        arr[i] = i+1;
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        // normal way
        // sum += arr[i];
        sum += *(arr+i);
    }
    printf("%d", sum);

    return 0;
}
