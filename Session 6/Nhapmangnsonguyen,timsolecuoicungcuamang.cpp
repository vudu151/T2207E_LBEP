#include<stdio.h>
int main(){
	int n,a;
	printf("Nhap kich thuoc mang n= ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap mang n:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2==1){
			a=arr[i];
		}
	}
	if(a%2==0){
		printf("Mang khong co so le");
	}else{
		printf("So le cuoi cung cua mang la: %d",a);
	}
	
}
