#include <stdio.h>

int sushu(a){
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
		for ( i = 3; i < o; i=i+2)
		{
			k=o-i;
			if(sushu (i)==1)
			{
				if (sushu(k)==1)
				{
					printf("%d=%d+%d",o,i,k );
					break;
				}
			}
		}
	}
	return 0;
}
