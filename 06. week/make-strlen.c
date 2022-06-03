#include <stdio.h>

int Strlen(char str[])
{
    int index = 0;
    while(str[index] != '\0'){
        index++;
    }
    return index;
}

int StrConcat(char str1[], char str2[], char concat)
{
    int index = 0;
    while(str[index] != '\0'){
        index++;
    }
    return index;
}

int main()
{
    char str[] = "Jamir";
    printf("%d", Strlen(str));

    return 0;
}
