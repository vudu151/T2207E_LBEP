#include<stdio.h>
int main(){
    int a,b;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	for(int i=a;i<=a;i--){
		if(a%i==0 && b%i==0){
			printf("Uoc chung lon nhat la: %d",i);
			break;
		}
	}
	for(int i=a;i>=a;i++){
		if(i%a==0 && i%b==0){
			printf("\nBoi chung nho nhat la: %d",i);
			break;
		}
	}
}
