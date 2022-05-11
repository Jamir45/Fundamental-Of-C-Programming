#include<stdio.h>

int main(){
   int H, W;
   int h, w;
   scanf("%d %d", &H, &W);
   scanf("%d %d", &h, &w);

   int rows = H-h;
   int columns = W-w;

   printf("%d\n", rows*columns);
   return 0;
};
