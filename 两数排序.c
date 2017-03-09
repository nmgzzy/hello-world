#include<stdio.h>

int main()
{
	int a,b,p,q;
	printf("请输入两个不相等的数：a,b\n");
	scanf("%d,%d",&a,&b);
	
	if(a<b){
		p=a;
		q=b;
	}
	else{
		p=b;
		q=a;
	}
	printf("%d<%d",p,q);
	return 0;

}
