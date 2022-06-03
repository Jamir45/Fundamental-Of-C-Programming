#include<stdio.h>
int main () {
    int num[] = {10, 20, 50, 40, 50, 30, 40};
    int len = sizeof(num)/sizeof(num[0]);

    int max = 0;
    int total = 0;
    for(int i=0; i<len; i++){
        int x = num[i];
        if(max < x){
            max = x;
        }
    }
    for(int i=0; i<len; i++){
        int x = num[i];
        if(max == x){
            total++;
        }
    }
    printf("%d -> %d", max, total);

    return 0;
}

