#include <stdio.h>
int main(int argc, char const *argv[])
{
	int eqt1[100];
	int eqt2[100];
	int eqt3[100];
	int i,m,n,j,k,p,q; 
	for (k = 0; i < 100; ++i)
	{
		eqt1[i]=0;
		eqt2[i]=0;
		eqt3[i]=0;
	}
	do
	{
		scanf("%d %d",&m,&p);
		eqt1[m]=p;
	} while (m!=0);
	do
	{
		scanf("%d %d",&n,&q);
		eqt2[n]=q;
	} while (n!=0);
	for (i = 0; i < 100; ++i)
	{
		eqt3[i]=eqt1[i]+eqt2[i];
	}
	for (j = 99; j >=0; j--)
	{
		if (eqt3[j]!=0)
		{
			if(j>0)
			{
				printf("%dx%d",eqt3[j],j);
				printf("+");
			}else
				printf("%d",eqt3[0]);
		}
	}
//	printf("0");
	return 0;
}
