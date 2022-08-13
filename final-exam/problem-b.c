#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    gets(str);

    int count = 0;
    for(int i=0; i<strlen(str); i++){
        if(str[i] == 'a'){
            count++;
        }
    }

    if(strlen(str) < (2*count)-1){
        printf("%d\n", strlen(str));
    }else{
        printf("%d\n", (2*count)-1);
    }

    return 0;
}
