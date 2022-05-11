
#include<stdio.h>

int main() {
    /*
     // print 1 22 333 4444.........
     int i,j,n;
     scanf("%d",&n);

     for(i=0;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
      }
        printf("\n");
     }
     */

    // print 1 23 456 78910.........
    int i,j,k;
    k=1;
    for(i=1;i<5;i++){
        for(j=1;j<=i;j++){
            printf("%d",k++);
        }
        printf("\n");
    }


    return 0;
}
