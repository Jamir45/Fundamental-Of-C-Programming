#include <stdio.h>
#include <string.h>

int main(){
  int N;
  scanf("%d", &N);

  char str[N];
  scanf("%s", str);

  int count = 0;
  for(int i=0; i<N; i++){
    if(str[i] == str[i+1]){
        count++;
    }
  };

  printf("%d\n", count);

  return 0;
}
