#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double x1,x2;
	printf("请输入a,b,c:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if((sqrt(b*b-4*a*c))>0){
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		printf("x1=%7.2lf,x2=%7.2lf\n",x1,x2);
	}
	else if((sqrt(b*b-4*a*c))==0){
		x1=-b/(2*a);
		printf("x1=x2=%7.2lf\n",x1);
	}else{
		printf("没有实数根\n");
	}
	return 0;
}
