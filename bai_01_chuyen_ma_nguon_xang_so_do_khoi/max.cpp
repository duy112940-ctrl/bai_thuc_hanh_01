#include<stdio.h>
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
}
void ktra(int a[],int n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}printf("so lon nhat trong mang : %d",max);
}
int main(){
	int a[100];
	int n;
	do{
		printf("Nhap so phan tu: ");
		scanf("%d",&n);
	}while(n<=0||n>100);
	nhap(a,n);
	ktra(a,n);
}
