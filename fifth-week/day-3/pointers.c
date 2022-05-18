#include <stdio.h>

int main()
{
    const int a = 20;
    printf("%d ", a);

    int *b = &a;
    *b = 40;
    printf("%d ", *b);

    return 0;
}
