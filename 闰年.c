#include<stdio.h>

int main()
{
	int year;
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||year%400==0)
	printf("������\n");
	else
	printf("��������\n");
	return 0;
}



/*222222222

#include<stdio.h>

int main()
{
	int year,leap=0;
	scanf("%d",&year);
	if(year%400==0)
	leap=1;
	else
	{
		if(year%4==0){
			leap=1;
			if(year%100==0)
				leap=0;
		}
	}
	if(leap)
	printf("������\n");
	else
	printf("��������\n");
	return 0;
}

*/
