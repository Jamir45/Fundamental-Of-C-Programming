#include <stdio.h>

int main ()
{
    char a[100], b[100];
    gets(a);
    strcpy(b, a);
    strrev(b);

    char res[100] = {0};
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i] != b[i]){
            strcpy(res, "String Is Not Palindrom");
            break;
        }else{
            strcpy(res, "String Is Palindrom");
        }
    }

    printf("%s", res);

    return 0;
}
