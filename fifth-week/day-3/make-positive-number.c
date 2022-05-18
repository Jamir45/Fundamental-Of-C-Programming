#include <stdio.h>

int makePositive(int a)
{
	if (a < 0){
		return a*-1;
	} else {
        return a;
	}
}


int main()
{
    printf("%d", makePositive(-5));

    return 0;
}

