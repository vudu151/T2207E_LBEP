#include<stdio.h>
int main(){
	int n;	
	printf("Nhap 10 so nguyen:\n");
	scanf("%d",&n);
	int ary[10];
	int i, high;
	for(i=0; i<10; i++){
		scanf("%d",&ary[i]);
	}
	high = ary[0];
	for(i=1; i<10; i++){
		if(ary[i]> high)
			high = ary[i];
	}
	printf("Highest value entered was %d\n", high);
}
