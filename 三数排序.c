#include<stdio.h>

int min(m,n)
{
	int t;
	if(m<n)
		t=m;
	else
		t=n;
	return t;
}

int max(m,n)
{
	int t;
	if(m>n)
		t=m;
	else
		t=n;
	return t;
}

int main()
{
	int a,b,c,m,x,y,z;
	printf("请输入三个不相等的数：a,b,c\n");
	scanf("%d,%d,%d",&a,&b,&c);
	x=min(min(a,b),c);
	z=max(max(a,b),c);
	y=a+b+c-x-z;
	printf("%d<%d<%d",x,y,z);
	return 0;
}
