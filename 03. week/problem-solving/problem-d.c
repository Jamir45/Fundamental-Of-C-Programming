#include<stdio.h>

int main () {
    int S, T, X;
    scanf("%d %d %d", &S, &T, &X);

    if (S <= X && X <= 23) {
        printf("Yes");
    } else if (0 <= X && X <= T) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
