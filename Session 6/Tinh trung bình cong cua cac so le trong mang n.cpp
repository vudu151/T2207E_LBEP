#include<stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen n:\n");
	scanf("%d",&n);
	printf("Nhap mang :\n");
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[n]);
	}
	int s=0;
	int S;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[n]);
	if(i%2==1){
		for(int j=0;;j++){
		s=s+arr[i];
		S=s/j;
		}
	}
	printf("Trung  binh cong cua cac so le la %d",S);
}
}
