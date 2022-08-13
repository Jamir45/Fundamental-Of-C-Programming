#include <stdio.h>

int main()
{
    char a[100];
    gets(a);

    int i=0, j=strlen(a)-1;
    char res[100] = {0};

    while(i<j)
    {
        if(a[i] != a[j]){
            strcpy(res, "String Is Not Palindrom");
            break;
        }else{
            strcpy(res, "String Is Palindrom");
        }
        i++;
        j--;
    }
    printf("%s", res);

    return 0;
}
