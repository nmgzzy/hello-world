#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,x1,x2,m,p,q;

	printf("������a,b,c:\n");

	scanf("%lf,%lf,%lf",&a,&b,&c);

	p=(-b/(2*a));
	q=sqrt(b*b-4*a*c)/(2*a);

	if(a==0)
	{	x1=-b/a;
		printf("x1=x2=%7.2lf\n",x1);
	}
	else
	{
		if((b*b-4*a*c)>1e-6)
		{	x1=p+q;
			x2=p-q;
			printf("x1=%7.2lf\n",x1);
			printf("x2=%7.2lf\n",x2);
			x2=%7.2lf\n
		}
		else if(fabs((b*b-4*a*c))<=1e-6)
		{	x1=p;
			printf("x1=x2=%7.2lf\n",x1);
		}else
		{	m=sqrt(-(b*b-4*a*c))/(2*a);
			printf("x1=%7.2lf+%7.2lfi\n",p,m);
			printf("x2=%7.2lf-%7.2lfi\n",p,m);
			
		}
	}
return 0;
}
