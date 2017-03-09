#include <stdio.h>
#define SIZE 4 
int main()
{
	int a[4],i,j,t;
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<SIZE;i++)
	{
		for(j=0;j<SIZE-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j]; a[j]=a[j+1]; a[j+1]=t;
			}
		}
	}
	for(i=0;i<SIZE;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
	return 0;
}
