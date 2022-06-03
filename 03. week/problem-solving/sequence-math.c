#include<stdio.h>

int main () {
    //01. sum of 1+2+3+.....100
    /*
    int sum = 0;
    for(int i=1; i<=100; i++){
        sum +=i;
    };
    printf("%d\n", sum);
    */

    //02. sum of 50 + 49 + 48 + 47 + …… ( প্রথম ২০টি পদ )
    /*
    int sum = 0;
    for(int i=50; i>=30; i--){
        sum +=i;
    };
    printf("%d\n", sum);
    */

    //03. 2 + 5 + 8 + 11 + 14 + …..   (প্রথম ১০টি পদ)
    int init = 2;
    int sum = 2;
    for(int i=1; i<=100; i++){
        sum +=3;
        printf("%d\n", sum);
    };
    //printf("%d\n", sum);

    return 0;
}
