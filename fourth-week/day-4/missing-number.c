#include <stdio.h>
#include<string.h>

int main(){
    // get 0 to 10 number as a string
    char numbers[10];
    gets(numbers);

    // covert string to number and store in an array by count
    int freq[10] = {0};
    for(int i=0; i<strlen(numbers); i++){
        char c = numbers[i];
        int disit = c-'0';
        freq[disit]++;
    }

    // finding missing number from 0 to 10;
    int ans;
    for(int i=0; i<9; i++){
        if(freq[i] == 0){
            ans = i;
        }
    }
    printf("%d\n", ans);

    return 0;
}
