#include <stdio.h>

int main()
{
    int L, R;
    scanf("%d %d", &L, &R);

    char S[100000];
    scanf(" %[^\n]", S);

    for(int i=L-1, j=R-1; i<j; i++, j--){
        char temp = S[j];
        S[j] = S[i];
        S[i] = temp;
    }
    printf("%s", S);

    return 0;
}
