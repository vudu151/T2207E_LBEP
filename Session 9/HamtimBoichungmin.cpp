#include<stdio.h>
int timBoichungmin(int a, int b){
	for(int i=a;i>=a;i++){
		if(i%a==0 && i%b==0){
			return i;
		}
	}
}
int main(){
	int a,b,i;
	printf("Nhap a:\n");
	scanf("%d",&a);
	printf("Nhap b:\n");
	scanf("%d",&b);
	i= timBoichungmin(a,b);
	printf("Boi chung min cua %d va %d la: %d",a,b,i);
}
