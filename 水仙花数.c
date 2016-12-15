#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num,a,b,c;
	for (num = 100; num < 1000; num++)
	{
		a=num/100;
		b=(num%100)/10;
		c=num%10;

		if (num==a*a*a+b*b*b+c*c*c)
			printf("%d\n",num );
	}
	return 0;
}