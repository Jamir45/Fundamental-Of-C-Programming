#include<stdio.h>

int main () {
    int n, p, q;
    scanf("%d", &n);

    int room = 0;
    for (int i=1; i <= n; i++){
        scanf("%d %d", &p, &q);
        if(p!=q){
            room +=1;
        }
    }

    // output
    printf("%d", room);

    return 0;
}
