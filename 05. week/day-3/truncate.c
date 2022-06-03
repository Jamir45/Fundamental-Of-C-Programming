#include <stdio.h>

void truncate(char s[], int k)
{
    char str[10]={0};
    for(int i=0; i<k; i++){
        str[i]=s[i];
    }
    printf("%s", str);
}

int main()
{
    char s[10]="abcd";

    truncate(s, 2);

    return 0;
}

