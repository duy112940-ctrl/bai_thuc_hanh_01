#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	int max;
	if(a>b){
		max=a;
	}else{
		max=b;
	}
	int bcnn;
	bcnn=max;
	while(bcnn%a!=0||bcnn%b!=0){
		bcnn++;
	}printf("Boi chung nho nhat la : %d",bcnn);
}
