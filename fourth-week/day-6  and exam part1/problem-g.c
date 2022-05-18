#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    double c, d;
    scanf("%lf %lf", &c, &d);

    int sum = a+b;
    int diff = a-b;
    printf("%d %d\n", sum, diff);

    double sumd = c+d;
    double diffd = c-d;
    printf("%.1lf %.1lf\n", sumd, diffd);

    return 0;
}
