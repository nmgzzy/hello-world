#include <stdio.h>

int PrimeNum(int num)
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

int main(){
	int num,m;
	printf("please write a num between 2 and 100000\n" );
	scanf("%d",&num);
	if (num>=2&&num<=100000)
	{
		printf("%d=",num);
		for (m = 2; m < num; )
		{
			if (num%m==0)
			{
				printf("%d",m );
				if (PrimeNum(num)==0)
				{
					printf("x");
				}
				num=num/m;
			}else
			{
				m++;
			}					
		}
		printf("%d\n",num );
	} else printf("error\n");
	return 0;
}

