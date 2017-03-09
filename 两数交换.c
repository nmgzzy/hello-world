#include<stdio.h>

int main()
{
    int a,b,c;
	printf("请输入a,b:\n");
	scanf("%d %d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
void swap(int *a,int *b)
{
	int t;
	t=*a;*a=*b;*b=t;
}
