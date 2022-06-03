#include<stdio.h>
#include <string.h>
int main(){
    char S[15];
    scanf("%s", &S);

    int res = strcmp(S, "Hello,World!");

    if(res == 0){
        printf("AC");
    } else {
        printf("WA");
    }

    return 0;
}

