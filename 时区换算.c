#include<stdio.h> 
int main()
{
	int ut,h,m,bt;
	scanf("%d",&bt);
	h=bt/100;
	m=bt%100;

if(m>=60){
}else {
	if(h>=24){
	
	}
	else if(h>=8){
		h=h-8;
		ut=h*100+m;
		printf("%d",ut);
	}
	else if(h>=0){
		h=h+24-8;
		ut=h*100+m;
		printf("%d",ut);
	}
}
	return 0;
}
