#include <stdio.h>

void isMax(int arr[])
{
    int len = sizeof(arr);

    int max = 0;
    for(int i=0; i<len; i++){
        if(max < arr[i]){
            max = arr[i];
        };
    };
}

int main()
{
    int arr[10]={1, 2, 3, 4, 5};
    isMax(arr);

    return 0;
}
