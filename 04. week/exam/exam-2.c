#include <stdio.h>
#include <string.h>

int main(){
    char a[10];
    fgets(a, 10, stdin);

    for(int i=0; i<strlen(a); i++){
        printf("%c\n", a[i]);
    }

    return 0;
}
