#include <stdio.h>

int main(){
    unsigned long long num;
    scanf("%llu", &num);

    int total=0, count=0;
    while(num > 0){
        int mod = num % 10;
        if(mod == 4 || mod == 7){
            count++;
        }
        total++;
        num = num / 10;
    }
    if(total == count){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;

   return 0;
}
