#include<stdio.h>
int main()
{
	int i,j,k=1,a,m=12,n=12;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(;m>0;m--)
		{
			printf(" ");
		}
		n--;
		m=n;
		for(j=1;j<=k;j++)
		{
			printf("*");
		}
		k=k+2;
		printf("\n");
	}
	k=k-4;
	m=0;
	n=13-a;
	for(i=a;i>0;i--)
	{
		for(;m<=n;m++)
		{
			printf(" ");
		}
		n++;
		m=0;
		for(j=1;j<=k;j++)
		{
			printf("*");
		}
		k=k-2;
		printf("\n");
	}
	return 0;
}
