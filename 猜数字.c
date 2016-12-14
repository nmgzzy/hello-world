#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a=0,b=100,leap;
	int i,m; 
	printf("请想象一个0~100的整数，输入1开始\n");
	scanf("%d",&m); 
	
	for (i = 50; ; )
	{
		printf("是不是：%d？\n",i );
		printf("大了请输入2，小了请输入1，对了请输入0\n");
		scanf("%d",&leap);

		 if (leap==2)
		 {
		 	b=i;
		 	i=(a+i)/2;
		 }else 
		 if (leap==1)
		 {
		 	a=i;
		 	i=(b+i)/2;
		 	if(i==a&&i==99) 
		 	i=100;
		 }else 
		 if (leap==0)
		 {
		 	printf("太棒了，猜对了\n");
		 	break;
		 }
	}
	return 0;
}
