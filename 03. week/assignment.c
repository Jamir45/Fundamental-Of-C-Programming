#include<stdio.h>
#include<stdlib.h>

int main () {

    /*
    // problem b
    int n;
    scanf("%d", &n);

    int room = 0;
    for (int i=1; i <= n; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        if(a != b){
            room +=1;
        }
    }23 0 2323 0 2323 0 23
    printf("%d", room);
    */

    /*
    // problem c
    int S, T, X;
    scanf("%d %d %d", &S, &T, &X);

    if (S <= X && X <= 23) {
        printf("Yes");
    } else if (0 <= X && X <= T) {
        printf("Yes");
    } else {
        printf("No");
    }
    */

    int n;
    scanf("%d", &n);


    int i = 1;
    int A = 0;
    int D = 0;
    while(i <= n){
        char w;
        scanf("%c", &w);
        printf("%d\n", w);

        i++;
    };


    return 0;
}
