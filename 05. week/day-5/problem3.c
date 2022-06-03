#include <stdio.h>

void reverse(int* num)
{
    int reverse;
    while (*num > 0) {
        int last = *num%10;
        *num /= 10;
        reverse = reverse * 10 + last;
    };
    printf("%d", reverse);
}

int main()
{
    int num = 4657;
    reverse(&num);

    return 0;
}
