#include <stdio.h>
#include <ctype.h>
#include <string.h>

int assenSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        for(int check=i+1; check<n; check++){
            if(arr[check]<arr[i])
            {
                int temp = arr[check];
                arr[check] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    char s[100];
    gets(s);

    int count = 0;
    int res[50];

    for(int i=0; i<strlen(s); i++){
        if(isdigit(s[i])){
            int num = (int) s[i]-48;
            res[count] = s[i]-48;
            count++;
        }
    }

    assenSort(res, count);

    for(int i=0; i<count; i++){
        if(i == 0){
            printf("%d", res[i]);
        }else{
            printf("+%d", res[i]);
        }
    }

    return 0;
}
