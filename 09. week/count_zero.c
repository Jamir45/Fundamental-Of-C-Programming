#include <stdio.h>
#include <string.h>

void count_zero(char str[])
{
    int zero = 0;
    for(int i=0; i<strlen(str); i++){
        if(str[i] == '0')
        {
            zero++;
        }
    };
    printf("%d", zero);
}

int main(){
    char str[100];
    gets(str);
    count_zero(str);

    return 0;
}
