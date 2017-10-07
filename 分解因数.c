#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
	int k;
	int p=1;
	for (k = 2; k < num; ++k)
	{
		if (num%k==0)
		{
			p=0;
			break;
		}
	}		
	return p;
}

int main()
{
	int num,m,n;
	printf("please write a num between 2 and 100000\n" );
	scanf("%d",&num);
	if (num>=2&&num<=100000)
	{
		for (m = 2; m <= sqrt(num);m++ )
		{
			if(num%m==0)
			{
				n=num/m;
				printf("%d=%d*%d\n",num,m,n);
			}
		}
	} 
	else 
		printf("error\n");
	return 0;
}

