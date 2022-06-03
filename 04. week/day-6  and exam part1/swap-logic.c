#include <stdio.h>
#include <string.h>

int main(){
  int n = 10;
    int a[n], b[n];
    for (int i=0; i<n; i++) {
        int temp = i;
        a[i] = b[i];
        b[i] = temp;
    }
    for(int i=0; i<n; i++){
        printf("%d %d\n", a[i], b[i]);
    }
  return 0;
}
