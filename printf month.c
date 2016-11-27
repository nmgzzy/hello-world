#include <stdio.h>
int main(){
	int p; 
	char *a[]={"January","February","March","April","May","June",
	"July","August","Suptember","October","November","December"};
	scanf("%d",&p);
	p--;
	printf("%s\n",*a[p] );
	return 0;
}
