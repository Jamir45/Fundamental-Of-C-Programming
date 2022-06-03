#include <stdio.h>
#include <string.h>

int main(){
   int n;
   scanf("%d", &n);

   char string[n];
   scanf("%s", &string);
   int c, count[26] = {0};

   for(int i=0 ; i<strlen(string); i++){
        string[i] = tolower(string[i]);
   }

   while (string[c] != '\0') {
      if (string[c] >= 'a' && string[c] <= 'z')
         count[string[c]-'a']++;
      c++;
   }

   int total = 0;
   for (c=0; c<26 ; c++) {
        if(count[c] > 0){
            total++;
        }
   }

   if(total == 26){
        printf("YES");
   }else{
        printf("NO");
   }

   return 0;
}
