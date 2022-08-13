#include <stdio.h>
#include <stdbool.h>

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
    char s[1000];
    gets(s);
    int arr[1000], count = 0;

    for(int i=0; i<strlen(s); i++){
        if(isdigit(s[i])){
            int num = (int) s[i]-48;
            arr[count] = num;
            count++;
        }
    }

    /*
    int res = 0;
    for(int i=0; i<count; i++){
        printf("%d", arr[i]);
        if
    }
    */
    int fr1[100];
    int n = count, i, j, ctr;

    for(i=0; i<n; i++){
        ctr = 1;
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                ctr++;
                fr1[j] = 0;
            }
        }

        if(fr1[i]!=0){
            fr1[i] = ctr;
        }
    }

    int arr2[10], count2 = 0;
    for(i=0; i<n; i++){
        if(fr1[i]!=0){
            printf("%d\n", arr[i]);
            arr2[count2] = arr[i];
            count2++;
        }
    }
    //assenSort(arr2, 10);

    //getting final result
    int test = 1;
    for(i=0; i<10; i++){
        printf("%d\n", arr2[i]);

        if(arr2[i] != test){
            printf("NO");
            return 0;
        }
        test++;
    }
    printf("YES");

    return 0;
}
