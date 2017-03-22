#include <stdio.h>
// 多个数组的故事
//   交集  并集
int find(int,const int *);
int find(int,const int *);

void main()
{
	int a[10]={1,3,5,7,9,11,13},na=7;
	int b[10]={2,4,6,8,7,11,13},nb=7;
	int c[10],nc=0;
	int d[20],nd=0;
	int i;
//交集
	for(i=0; i<na; i++)
	{
		if(find(a[i],b))
		{
			c[nc++]=a[i];
		}
	}
//并集
	for(i=0; i<na; i++)
	{
		d[nd++]=a[i];
	}
	for(i=0; i<na; i++)
	{
		if(notFind(b[i],a))
		{
			d[nd++]=b[i];
		}
	}
//打印
	printf("交集：");
	for(i=0; i<nc; i++)
		printf("%5d",c[i]);
	printf("\n");
	printf("并集：");
	for(i=0; i<nd; i++)
		printf("%5d",d[i]);
	printf("\n");
}

int find(int a,const int *b)
{
	int f=0,i;
	for(i=0; i<10; i++)
	{
		if(a==b[i])
		{
			f=1;
		}
	}
	return f;
}

int notFind(int b,const int *a)
{
	int f=1,i;
	for(i=0; i<10; i++)
	{
		if(b==a[i])
		{
			f=0;
		}
	}
	return f;
}