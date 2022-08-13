#include <stdio.h>
#include <stdbool.h>

int myXOR(int x, int y)
{
    int res = 0;

    // Assuming 32-bit Integer
    for (int i = 31; i >= 0; i--)
    {
        bool b1 = x & (1 << i);
        bool b2 = y & (1 << i);

        // If both are 1 then 0 else xor is same as OR
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);

        // Update result
        res <<= 1;
        res |= xoredBit;
    }
    return res;
}

int main()
{
    int I = 3, r = 5;

    printf("XOR is %d\n", myXOR(I, r));
    return 0;
}
