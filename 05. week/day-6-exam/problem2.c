#include <stdio.h>

char getChar(int a, double b)
{
    printf("%d %lf\n", a, b);

    return 'J';
}

int main()
{
    int a=10;
    double b=20.55;
    printf("%c", getChar(a, b));

    return 0;
}
