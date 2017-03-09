#include<stdio.h>
int main()
{
	char str[100];
	int i,n;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		for(n=0;str[i]!=' ';i++)
		{
			if(str[i]=='.')
				break;
			n++;
		}
		if(n!=0)
		{
			printf("%d",n);
			if(str[i+1]!='\0')
				printf(" ");
		}
	}
	printf("\n");
	return 0;
}
