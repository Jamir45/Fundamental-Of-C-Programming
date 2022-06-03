#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    scanf("%s", &str);
    str[0] = toupper(str[0]);

    printf("%s\n", str);

    return 0;
}
