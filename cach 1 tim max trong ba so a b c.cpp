#include<stdio.h>
int main(){
	int a,b, c;
	printf("Nhap ba so a b c\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("Max la %d",a);
		}else{
			printf("Max la %d",c);
		}
	}else{
		if(b>c){
			printf("Max la %d",b);
		}else{
			printf("Max la %d",c);
		}
	}
	}
