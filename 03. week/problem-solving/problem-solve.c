#include<stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int sum = A+B;
    int sub = A-B;
    int mul = A*B;

    if (sum > sub && sum > mul){
        printf("%d", sum);
    } else if (sub > sum && sub > mul) {
        printf("%d", sub);
    } else {
        printf("%d", mul);
    }

    return 0;
}
