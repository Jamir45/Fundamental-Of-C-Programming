#include<stdio.h>
int main () {
    int num[] = {-7, 2, 3, 8, 6, 6, 75, 38, 35, 32};
    int len = sizeof(num)/sizeof(num[0]);

    int max1, max2;
    for(int i=0; i<len; i++){
        int x = num[i];
        if(max1 < x){
            max2 = max1;
            max1 = num[i];
        }else if(num[i] > max2 && num[i] < max1){
            max2 = num[i];
        }
    }

    printf("%d\n", max2);

    return 0;
}

