#include<stdio.h>
#define PI 3.14
int main()
{
	double r,s,c;
	printf("输入半径：");
	scanf("%lf",&r);
	s=PI*r*r;
	c=PI*2*r;
	printf("周长为：%lf半径为：%lf\n",c,s);
	return 0;
}