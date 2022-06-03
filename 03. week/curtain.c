#include<stdio.h>

int main () {
//    int A, B;
//    scanf("%d %d", &A, &B);
//
//    int half = A/2;
//
//    if (half < B) {
//        printf("0");
//    } else {
//        int calc = A - (B+B);
//        printf("%d", calc);
//    };

    int N;
    scanf("%d", &N);
    int down = -pow(10, 31);
    int up = pow(10, 31);

    if (down > N && down < 0) {
       printf("Yes");
    } else if (0 < N && up > N) {
       printf("Yes");
    } else {
       printf("No");
    }

    return 0;
}
