#include<stdio.h>
int main () {
    char a[100] = "ab";
    char b[100] = "cd";
    strcat(a, b);
    printf("%s", strcat(a, b));

    char c[100];
    fgets("%s", c, 100);
    printf("%s", c);


    return 0;
}
