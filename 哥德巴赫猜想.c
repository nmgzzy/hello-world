#include <stdio.h>

int isPrime(int a);

int main(int argc, char const *argv[])
{
	int o,i,k;
	printf("请输入大偶数：");
	scanf("%d",&o);
	if (o==4)
	{
		printf("4=2+2\n");
	}
	else
	{
		for ( i = 3; i <= o/2; i=i+2)
		{
			k=o-i;
			if(isPrime (i)==1&&isPrime(k)==1)
			{
				printf("%d=%d+%d\n",o,i,k );
			}
		}
	}
	return 0;
}

int isPrime(int a)
{
	int j,b,p=1;
	for ( j = 2; j < a; ++j )
	{
		b=a%j;
		if ( b==0 )
		{
			p=0;
			break;
		}
	}
	return p;
}
