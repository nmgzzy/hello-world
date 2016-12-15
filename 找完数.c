#include <stdio.h>

//6,28,496,8128

int PftNum(int num)
{
	int p=0,i,s=1;
	
	for (i = 2; i < num;  )
	{
		if (num%i==0)
		{
			s=s+i;
		}	
		++i;
	}

	if  ( num == s )
	{
		p=1;
	}
	return p;
}

int main(){
	int num,m,n,i;
	printf("please input m n (0<=m<n<10000)\n" );
	scanf("%d %d",&m,&n);
	if ( m>=0 && m<n && n<10000 )
	{
		for (i = m; i <= n; ++i)
		{
			if (PftNum(i))
			{
				if (i!=1)
				{
					
					printf("%d",i );
					if (i!=n)
					{
						printf(" ");
					}
				}
			}
		}
		printf("\n");

	} else printf("error\n");
	return 0;
}
