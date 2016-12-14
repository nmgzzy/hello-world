#include <stdio.h>

int main()
{
	int x=0;
	int j=0;
	int o=0;
do
{
	scanf("%d",&x);
		if (x>=100000);
		else if(x<=0);
		else if (x%2==0) 
			o=o+1;
		else if (x%2!=0)
			j=j+1;
	
} while (x!=-1);

printf("%d ",j);
printf("%d",o);
	return 0;
}
