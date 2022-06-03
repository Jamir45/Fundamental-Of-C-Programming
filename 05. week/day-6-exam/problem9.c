#include <stdio.h>

void reverse(int n, int numbers[])
{
    for(int i=0, j=n-1; i<j; i++, j--){
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];
    for(int i=0; i<n; i++){
        numbers[i]=i+1;
    }

    // array reversing
    reverse(n, numbers);

    for(int i=0; i<n; i++){
        printf("%d ", numbers[i]);
    }

    return 0;
}
