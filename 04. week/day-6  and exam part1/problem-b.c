#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    int res = 0, max = 0;
    for(int i=0; i<N; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    for(int i=0; i<N; i++){
        res = res + (max-arr[i]);
    }

    //print output
    printf("%d", res);

    return 0;
}
