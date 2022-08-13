#include <stdio.h>

int main()
{
	char str[100]={0};
	gets(str);

	int res0 = 0, res1 = 0;
	for(int i=0; i<strlen(str); i++)
	{
        if(str[i] == str[i+1]){
            res0++;
        }
	}

	printf("0 = %d\n", res0);

	return 0;
}

