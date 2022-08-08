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
	
	int thangmay=0;
	int kiluc=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			thangmay++;
			if(thangmay>kiluc){
				kiluc=thangmay;
			}
		}else{
			thangmay=0;
		}
	}
	printf("So luong so duong lien tiep nhieu nhat : %d",kiluc);
}
