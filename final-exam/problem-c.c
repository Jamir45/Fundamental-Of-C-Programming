#include <stdio.h>

int main()
{
    int tern;
    scanf("%d", &tern);

    for(int i=0; i<tern; i++){
        int n;
        scanf("%d", &n);

        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }

        int i=0, j=n-1;

        while(i <= j)
        {
            if(i == j){
                printf("%d", arr[i]);
            }else{
                printf("%d %d ", arr[i], arr[j]);
            }

            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}

