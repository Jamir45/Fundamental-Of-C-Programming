#include<stdio.h>

int main () {
    int x;
    scanf("%d", &x);

    while (x > 0) {
        int last = x%10;
        x /= 10;
        printf("Current Number is = %d and last number is = %d\n", x, last);
    };

    return 0;
}

