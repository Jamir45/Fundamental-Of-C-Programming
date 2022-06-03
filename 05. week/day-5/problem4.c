#include <stdio.h>

void sort(int *a, int *b)
{
    if(*a > *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Before sort %d %d\n", a, b);
    sort(&a, &b);
    printf("After sort %d %d\n", a, b);

    return 0;
}
