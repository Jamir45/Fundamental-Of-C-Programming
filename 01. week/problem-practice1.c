#include <stdio.h>
int main (){
    //problem onw
    printf ("Testing...");
    printf ("....1");
    printf ("...2");
    printf ("..3");
    printf ("\n");

    //problem two
    int sum;
    sum = 25 + 37 - 19;
    printf ("The answer is %d\n", sum);

    //problem three
    printf("Hello\n");
    printf(" nice\n");
    printf("   to\n");
    printf(" meet\n");
    printf("  you\n");

    //problem four variable valid name
    int Int;
    int Calloc;
    int floating;
    int ReInitialize;
    //int char; wrong
    int Xx;
    int _1312_;
    //int 6_05; wrong
    int alpha_beta_routine;
    int z;
    int A$;

    //problem five
    int x, y;
    printf("Enter two number for reminder");
    scanf("%d %d", &x, &y);
    double calculate = x/y;
    printf("%.2lf\n", (double)x/y);

    //inches to feet calculation
    int inches;
    printf("Enter height is inches : ");
    scanf("%d", &inches);
    int feet = inches / 12;
    int afterInchess = inches % 12;
    printf("Your height is %d feet %d inches\n", feet, afterInchess);

    //rectangle area and perimeter calculation
    double height;
    double width;
    printf("Enter height of rectangle : ");
    scanf("%lf", &height);
    printf("\n");
    printf("Enter width of rectangle : ");
    scanf("%lf", &width);
    printf("\n");

    double area = height*width;
    double perimeter = 2*(height+width);
    printf("Area is %.2lf \n", area);
    printf("Perimeter is %.2lf \n", perimeter);

    return 0;
}

