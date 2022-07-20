#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap a va b\n");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("Max: %d",a);
	}else{
		if(a<b){
			printf("Max: %d",b);
		}else{
			printf("a bang b");
		}
		}
	}
