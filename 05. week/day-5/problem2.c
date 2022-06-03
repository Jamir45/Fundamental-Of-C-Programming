#include <stdio.h>

int v;

int set(int n)
{
    v = n;
}
int makedouble()
{
    v = v*2;
}

int main()
{

    set(10);
    set(5);
    printf("%d\n", v);
    makedouble();
    makedouble();
    printf("%d\n", v);

    return 0;
}
