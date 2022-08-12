#include<stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang n=");
	scanf("%d",&n);
	
	int arr[n];
	printf("Nhap mang n:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int t=0;
	// tim duoc mot so duong
	for(int  i=0;i<n;i++){
		if(arr[i]>0){
			t=arr[i];
			break;
		}
	}
	if(t==0){
		printf("Mang khong co so duong nao ca");
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]<t &&arr[i]>0){
				t=arr[i];
			}
		}
		printf("So duong nho nhat la: %d",t);
	}
}
