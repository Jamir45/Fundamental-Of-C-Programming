#include <stdio.h>

void sort(int *a, int *b, int *c)
{
    if(*a < *b && *a < *c){
        if(*b > *c){
            int temp = *b;
            *b = *c;
            *c = temp;
        }
    }else if(*b < *a && *b < *c){
        int tempa = *b;
        if(*a > *c){
            int tempc = *a;
            *c = tempc;
        }
    }else {

    }
}

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b &c);
    printf("Before sort %d %d\n", a, b, c);
    sort(&a, &b, &c);
    printf("After sort %d %d\n", a, b, c);

    return 0;
}

