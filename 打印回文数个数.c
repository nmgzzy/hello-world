#include<stdio.h>
int main()
{
	int i,cnt=0;
	for(i=100;i<=200;i++)
	{
		if(hws(i))
		cnt++; 
	}
	printf("%d\n",cnt);
	return 0;
}

int hws(int a)
{
	int b=0,num,p;
	if(a>0)
	{
		num=a;
		while(a!=0)
		{
			b=10*b+a%10;
			a=a/10;
		}
		if(num==b)
		p=1;
		else
		p=0;
	}
	return p;
}
