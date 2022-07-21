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
			printf("Phuong trinh co mot nghiem la %f",-c/b);
		}
	}
	else{
		float delta=b*b-4*a*c;
		float can_delta=sqrt(delta);
		if(delta>0){
			printf("Phuong trinh có hai nghiem phan biet la %f %f",(-b+can_delta)/(2*a),(-b-can_delta)/(2*a));
		}
		else{
			if(delta==0){
				printf("Phuong trinh co mot nghiem la %f",-b/(2*a));
			}
			else{
				printf("Phuong trinh vo nghiem");
			}
		}
	}
}
