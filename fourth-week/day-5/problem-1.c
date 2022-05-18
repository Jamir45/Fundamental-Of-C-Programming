#include<stdio.h>
#include <string.h>
int main(){
    char S[10], T[10];
    scanf("%s %s", &S, &T);

    int res = strcmp(S, T);

    if(res < 0)
    {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
