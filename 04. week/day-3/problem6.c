#include<stdio.h>

int main () {
    int num[] = {10, 20, 50, 40, 50, 10, 40};
    int len = sizeof(num)/sizeof(num[0]);


    for(int i=0; i<len; i++){
        int item = num[i];
    }

    return 0;
}

