#include<stdio.h>
int main () {
    char str[10];
    fgets(str, 10, stdin);
    /*
    int strLen = sizeof(str)/sizeof(str[0]);

    for(int i=0; i<strLen; i++){
        printf("%c\n", str[i]);
    }
    printf("%s", str);
    */

    printf("%s", str);

    return 0;
}
