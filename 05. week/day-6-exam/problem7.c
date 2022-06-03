#include <stdio.h>
int value(int *ap, int *bp)
{
    *ap = 10;
    *bp = 30;
    return 0;
}

int main()
{
    int a, b;
    int *ap = &a;
    int *bp = &b;

    value(ap, bp);

    printf("a = %d and b = %d", a, b);

    return 0;
}
