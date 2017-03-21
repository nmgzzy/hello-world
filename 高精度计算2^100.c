#include <stdio.h>
// 高精度计算 2^100=1,267,650,600,228,229,401,496,703,205,376 
int main()
{
	int a[31]={0},i,j,n=0;
	a[0]=1;
	for(i=0;i<100;i++)
	{
		for(j=0;j<31;j++)
		{
			a[j]*=2;	
		}
		for(j=0;j<31;j++)
		{
			if(a[j]>=10)
			{
				a[j+1]=a[j+1]+a[j]/10;
				a[j]%=10;
			}	
		}
	}
	printf("2^100=");	
	for(i=30; i>=0; i--)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
