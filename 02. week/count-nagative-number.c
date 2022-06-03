#include<stdio.h>

int main() {
    // count dynamically negative number
    int min = -100;
    int max = 100;
    int n1;
    scanf("%d", &n1);

    int t1 = 0;
    for (int i=0; i < n1; i++) {
        int num = (rand() % (max - min + 1)) + min;
        if (num < 0) {
            t1+=1;
        }
    }
    printf("%d", t1);

    // count dynamically negative number
    int n;
    scanf("%d", &n);

    int t = 0;
    for (int i=0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num < 0) {
            t+=1;
        }
    }
    printf("%d", t);

    return 0;
};

