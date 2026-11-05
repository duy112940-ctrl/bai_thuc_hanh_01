#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Nhap a: \n");
	printf("Nhap b: \n");
	printf("Nhap c: \n");
	scanf("%d%d%d", &a, &b, &c);
	double x,x1,x2;
	double delta=b*b-4*a*c;
	if(a==0){
		printf("không phai phuong trình bac 2");
	}else{
		if(delta<0){
			printf("Vo nghiem");
		}else if(delta==0){
			x=(double)-b/(2*a);
			printf("phuong trinh co nghiem kep la : %.2f",x);
		}else if(delta>0){
			x1=(double)(-b+sqrt(delta))/(2*a);
			x2=(double)(-b-sqrt(delta))/(2*a);
			printf("phuong trinh co 2 nghiem phan biet : \n%.2f\n%.2f",x1,x2);
		}
	}
}
