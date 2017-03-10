#include<stdio.h>
int main()
{
	int a=1,b=2,c,i;
	c=a+b;
	printf("%8d%8d",a,b);
	for(i=1;i<=20;i++)
	{
    		printf("%8d",c);
    		(a>b)?(b=c):(a=c);
		c=a+b;
		if(i%4==0)
		printf("\n");
	}
	return 0;
}
