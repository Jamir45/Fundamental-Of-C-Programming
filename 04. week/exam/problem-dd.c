#include <stdio.h>

int main(){
    char str[50];
    scanf("%s", &str);

    for(int i=0; i<strlen(str); i++){
        if(i==0){
            str[i] = str[i]-32;
        }else{
            str[i] = str[i];
        }
    }
    printf("%s\n", str);

    return 0;
}
