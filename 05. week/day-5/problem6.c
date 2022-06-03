
#include <stdio.h>

void add(int a[], int b[], int sum[])
{
    for(int i=0; i<3; i++){
        sum[i] = a[i]+b[i];
    }
}

int main()
{
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    int sum[3];
    add(a, b, sum);
    for(int i=0; i<3; i++){
        printf("%d ", sum[i]);
    }


    return 0;
}
