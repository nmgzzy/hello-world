#include<stdio.h>
int main()
{
	int a=0,b=0,num;
	scanf("%d",&a);
	if(a>0)
	{
		num=a;
		while(a!=0)
		{
			b=10*b+a%10;
			a=a/10;
		}
		if(num==b)
		printf("yes");
		else
		printf("no");
	}else
	printf("error");
	return 0;
}
