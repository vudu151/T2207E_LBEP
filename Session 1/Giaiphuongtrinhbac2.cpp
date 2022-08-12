#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("Nhap he so a b c\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0){
			printf("Phuong trinh vo so nghiem");
			}
			else{
				printf("Phuong trinh vo nghiem");
			}
		}
		else{
			float x=-c/b;
			printf("Phuong trinh co mot nghiem la %f",x);
		}
	}
	else{
		float d=b*b-4*a*c;
		if(d>0){
			float x1=(-b+sqrt(d))/(2*a);
			float x2=(-b-sqrt(d))/(2*a);
			printf("Phuong trinh có hai nghiem phan biet la %f %f",x1,x2);
		}
		else{
			if(d==0){
				float x=-b/2*a;
				printf("Phuong trinh co mot nghiem la %f",x);
			}
			else{
				printf("Phuong trinh vo nghiem");
			}
		}
	}
}
