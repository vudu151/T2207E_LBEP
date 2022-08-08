#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float p,C,S;
	printf("Nhap 3 canh cua tam giac\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b+c){
		if(b<a+c){
			if(c<a+b){
			printf("a,b,c la ba canh cua tam giac\n");
			p=(a+b+c)/2;
			C=2*p;
			printf("Chu vi tam giac la %f\n",C);
			S=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("Dien tich tam giac la %f\n",S);
		}
		else{
			printf("a,b,c khong la 3 canh cua tam giac");
		}
	}
		else{
			printf("a,b,c khong la 3 canh cua tam giac");
		}
	}
	else{
	printf("a,b,c khong la 3 canh cua tam giac");
	}
}
