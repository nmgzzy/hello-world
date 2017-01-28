#include<stdio.h>
int main()
{
	int na,p=1,i,j;
	char a[100];
	gets(a);
	na=strlen(a);
	for(i=0,j=na-1; i<na; i++,j--)
	{
		if(a[i]!=a[j])
		{
			p=0;
			break;
		}
	}

	if(p==0)
		printf("no");
	else
		printf("yes");
	
	return 0;
}
