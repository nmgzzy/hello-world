#include <stdio.h>
int main(int argc, char const *argv[])
{
	int rst[200];
	int a,b,y,i;
	printf("10<=a<b<100,a/b\n");
	scanf("%d/%d",&a,&b); 
	y=a;
	for (i = 0; i < 200; ++i)
	{
		rst[i]=y*10/b;
		y=y*10%b;
	}

	printf("0.");
	for (i = 0; i < 200; ++i)
	{
		printf("%d",rst[i]);
	}
	printf("\n");
	return 0;
}
