#include <stdio.h>
int main(){
	int sum=0;
	int n,m;
	int p=1;
	int c=1;
	scanf("%d %d",&n,&m);
	int i;
	int k;
		for (i=2;c<=m;++i)
		{
			for (k = 2; k < i; ++k)
			{
				p=1;
				if (i%k==0){
				p=0;
				break;
				}		
			}
			if (p==1){
			
				if(c>=n)
				sum+=i;
			c++;
			
			}
			
	
		}
	
	printf("%d",sum);
	return 0;
}
