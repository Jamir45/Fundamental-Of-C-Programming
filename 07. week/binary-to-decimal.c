#include<stdio.h>
#include<math.h>

// main program
int main()
{
    long long binary;
    scanf("%lld", &binary);

    int i = 0, decimal= 0;

    //converting binary to decimal
    while (binary!=0)
    {
        int digit = binary % 10; // decimal number base always 10
        binary /= 10;
        decimal += digit * pow(2,i);
        i++;
    }

    printf("%lld", decimal);

    return 0;
}
