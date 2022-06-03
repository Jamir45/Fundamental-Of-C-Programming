#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[10],n,i;
    scanf("%d",&n);

    // Decimal to binary
    for(i=0; n>0; i++){
        int disit = n%2; // binary number base always 2
        n = n/2;
        a[i] = disit;
    }

    for(int j=0, k=i-1; j<k; j++, k--){
        int temp = a[j];
        a[j] = a[k];
        a[k] = temp;
    };

    for(int l=0; l<i; l++){
        printf("%d", a[l]);
    }

    return 0;
}

