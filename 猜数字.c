#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a=0,b=100,leap;
	int i,m; 
	printf("������һ��0~100������������1��ʼ\n");
	scanf("%d",&m); 
	
	for (i = 50; ; )
	{
		printf("�ǲ��ǣ�%d��\n",i );
		printf("����������2��С��������1������������0\n");
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
		 	printf("̫���ˣ��¶���\n");
		 	break;
		 }
	}
	return 0;
}
