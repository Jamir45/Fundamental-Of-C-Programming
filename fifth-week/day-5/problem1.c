#include <stdio.h>

int printCall(int* n)
{
    printf("Called %d times\n", *n);
    *n = *n+1;
}

int main()
{
    int n = 1;
    printCall(&n);
    printCall(&n);
    printCall(&n);
    return 0;
}
