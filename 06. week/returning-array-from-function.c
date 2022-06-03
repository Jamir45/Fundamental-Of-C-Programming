#include <stdio.h>

int* returnArray(int n)
{
    int *res = (int*) malloc((n*sizeof(int)));
    for(int i=0; i<n; i++){
        res[i] = i+1;
    }
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = returnArray(n);

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
