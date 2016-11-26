#include <stdio.h>
int main(int argc, char const *argv[])
{
	int min[10];
	int i,j,b,x=0;
	for(i=0;i<10;i++){
		scanf("%d",&min[i]);
	}

		x=min[0];
	for(j=1;j<10;j++){
		b=min[j];
		if (x<=b){
		}else{x=b;}

	}
	
	printf("min=%d\n",x );
		return 0;
}
