#include<stdio.h>
int main(){
	int n;	
	printf("Nhap n so nguyen:\n");
	scanf("%d",&n);
	printf("Nhap mang :\n");
	int ary[n];
	int i, high;
	for(i=0; i<n; i++){
		scanf("%d",&ary[i]);
	}
	high = ary[0];
	for(i=0; i<n; i++){
		if(ary[i]> high)
			high = ary[i];
	}
	printf("Highest value entered was %d\n", high);
	int high1 = high;
	for(int i=0;i<n;i++){
		if(ary[i]<high){
			high1 = ary[i];
			break;
		}
	}
	if(high1== high){
		printf("Mang khong co gia tri lon thu hai\n");
	}else{
		for(i=0; i<n; i++){
	if(ary[i]< high && ary[i]>high1)
		high1 = ary[i];
	}
	printf("High1 value entered was %d\n", high1);
	}

}
