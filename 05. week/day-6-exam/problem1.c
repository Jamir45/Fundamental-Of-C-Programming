#include <stdio.h>

void square(int a)
{
    int res = a*a;
    printf("Square of a = %d\n", res);
}

int main()
{
    int a;
    scanf("%d", &a);
    square(a);

    return 0;
}


