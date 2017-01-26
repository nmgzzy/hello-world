#include <stdio.h>


int main(int argc, char const *argv[])
{
	int n,i,j,k,p=0;
	int max,min,imin,jmax;
	scanf("%d",&n);
	int jz[100][100];
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			scanf("%d",&jz[i][j]);
		}
	}
	
	for (k = 0; k < n; ++k)
	{
		i=k;
		max=jz[i][0];
		jmax=0;
		for (j = 0; j < n; ++j)
		{
			if (max<jz[i][j])
			{
				max=jz[i][j];
				jmax=j;
			}
		}
		min=jz[0][jmax];
		imin=0;
		for (i = 0; i < n; ++i)
		{
			if (min>jz[i][jmax])
			{
				min=jz[i][jmax];
				imin=i;
			}
		}
		if (min==max)
		{
			p=1;
			break;
		}
	}

	if (p==1)
	{
		printf("jz[%d][%d]=%d\n",imin,jmax,max);
	}
	else
		printf("no");

	return 0;
}

