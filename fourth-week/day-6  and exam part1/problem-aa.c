#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char str[100];
    gets(str);

    int count = 0;
    for (int i = 0; i < strlen(str); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }
         if (!appears){
             count++;
         }
    }

    if( count%2 != 0){
        printf("IGNORE HIM!");
    } else {
        printf("CHAT WITH HER!");
    }

    return 0;
}
