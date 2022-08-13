#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n;
        scanf("%d",&n);
        char *arr = (char*)malloc(n*sizeof(char));
        gets(arr);

        int res = 0;
        for(int i=0; i<n; i++){
            printf("%c - ", arr[i]);
            if(arr[i] == '8'){
                res = 1;
            }
        }

        if(res == 1){
            printf("Yes\n");
        }else {
            printf("No\n");
        }
    }

    return 0;
}

