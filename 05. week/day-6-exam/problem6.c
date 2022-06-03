#include <stdio.h>

void makeNArray(int n, int *sum)
{
    for(int i=1; i<=n; i++){
        *sum = *sum + (i*i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    makeNArray(n, &sum);
    printf("%d", sum);

    return 0;
}
