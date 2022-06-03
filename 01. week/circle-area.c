#include<stdio.h>

int main () {
    printf("Enter Circle Radius : ");
    double radius;
    scanf("%lf", &radius);

    const double PI = 3.1416;

    double perimeter = 2*PI*radius;
    printf("The perimeter is = %.2lf", perimeter);
    printf("\n");

    double area = PI*radius*radius;
    printf("The area is = %.2lf", area);

    int alpha = 30;
    scanf("%d", &alpha);
    alpha = alpha * 2;
    alpha--;
    printf("alpha is = %d", alpha);

    return 0;
}
