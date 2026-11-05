#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int ktra;
	if(n<2){
		printf("khong phai la so nguyen to");
	}else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				ktra=0;
			}else ktra =1;
		}
	}
	if(ktra==0){
		printf("khong phai la so nguyen to");
	}else if(ktra==1){
		printf("la so nguyen to");
	}
}
