#include <stdio.h>

void strcat(char a[], char b[], char out[])
{
    int i=0;

    for(i; i<strlen(a); i++){
        out[i]=a[i];
    }

    for(int j=0; j<strlen(a); j++){
        out[i]=b[j];
        i++;
    }

    printf("%s", out);
}

int main()
{
    char a[100];
    gets(a);
    char b[100];
    gets(b);
    char out[200] = {0};
    strcat(a, b, out);

    return 0;
}
