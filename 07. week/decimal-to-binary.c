#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[10],n,i;
    scanf("%d",&n);

    for(i=0;n>0;i++){
        int disit = n%2;
        n = n/2;
        a[i] = disit;
    }

    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}
