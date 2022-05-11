#include<stdio.h>
int main () {
    int num[] = {10, 20, 30, 40, 50};

    int len = sizeof(num)/sizeof(num[0]);

    int sum = 0;
    for(int i=0; i<len; i++){
        sum = sum + num[i];
    }
    printf("%d", sum);

    return 0;
}
