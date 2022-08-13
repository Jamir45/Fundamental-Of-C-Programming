#include <stdio.h>
#include <string.h>

int main()
{
	char str[100]={0};
	gets(str);

	for(int i=0; i<strlen(str); i++)
	{
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32;
			continue;
		}
		if(str[i]==' ')//check space
		{
			++i;
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32;
				continue;
			}
		}
		else
		{
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32;
		}
	}

	printf("%s\n", str);

	return 0;
}
