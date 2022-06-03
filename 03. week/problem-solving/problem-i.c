#include<stdio.h>

int main () {
    int X;
    scanf("%d", &X);

    int count = 0;
    if ( 0 <= X && X < 40){
        for (int i=X; i<40; i++) {
            count++;
        }
        printf("%d", count);
    } else if (40 <= X && X < 70){
        for (int i=X; i<70; i++) {
            count++;
        }
        printf("%d", count);
    } else if (70 <= X && X < 90) {
        for (int i=X; i<90; i++) {
            count++;
        }
        printf("%d", count);
    } else {
        printf("expert");
    }
    /*
    for (int i=X; i<=100; i++) {
        if ( 0 <= X && X < 40){
            printf("%d", count);
        } else if (40 <= X && X < 70){
            printf("%d", count);
        } else if (70 <= X && X < 90) {
            printf("%d", count);
        } else {
            printf("expert");
        }
    }
    */

    return 0;
}

