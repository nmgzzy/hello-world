#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int *a,i;
	a=malloc(400);
	for (i = 1; ; ++i)
	{
		scanf("%d",&a[i]);
		if(a[i]==-1)
			break;
	}
	i--;
	for (; i > 0; i--)
	{
		printf("%d ",a[i]);
	}
	free(a);
	return 0;
}
