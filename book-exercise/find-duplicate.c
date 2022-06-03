#include <stdio.h>

int main()
{
    int arr[10] = {6,5,4,3,4,8,7,4,5,3};

    for(int i=0; i<10; i++){
        int count = 0;

        for(int j=0; j<10; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        printf("%d = %d\n", arr[i], count);
    }

    return 0;
}
