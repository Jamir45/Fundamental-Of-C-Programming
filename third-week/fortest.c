#include<stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    int i = 1;
    int A = 0;
    int D = 0;
    while(i <= n){
        char w;
        getchar();
        scanf("%c", &w);

        if(w == 'A'){
            A +=1;
        } else if (w == 'D') {
            D +=1;
        }

        i++;
    };

    if(A > D){
        printf("Anton");
    } else if (D > A) {
        printf("Danik");
    } else {
        printf("Friendship");
    }

    return 0;
}

