#include<stdio.h>

int main () {
    int x;
    scanf("%d", &x);

    int reverse;

    while (x > 0) {
        int last = x%10;
        x /= 10;
        reverse = reverse * 10 + last;
    };

    printf("Reversed number is = %d\n", reverse);

    return 0;
}
