#include <stdio.h>
#include <stdbool.h>

char is_reverese_sorted(int n, int a[])
{
    char res[10] = {0};
    for(int i=0; i<n; i++){
        if(a[i] > a[i+1]){
            res = "True";
        }else{
            res = "False";
        }
    }

    printf("%s", res);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    //assendingSort(n, arr);
    is_reverese_sorted(n, a);


    return 0;
}
