#include <stdio.h>

//pass the reference change original value on variable
void passbyReference(int* a, int* b)
{
    *a = 20;
    *b = 40;
    printf("a = %d and b = %d\n", *a, *b);
}

int main()
{
    int a=10, b=20;
    printf("a = %d and b = %d\n", a, b);

    passbyReference(&a, &b);
    printf("a = %d and b = %d\n", a, b);

    return 0;
}

