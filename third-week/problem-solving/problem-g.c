#include<stdio.h>

int main () {
    int A, B;
    scanf("%d %d", &A, &B);

    int total=0;
    for(int i=A; i<=B; i++){
        total +=1;
    };
    printf("%d", total);

    return 0;
}
