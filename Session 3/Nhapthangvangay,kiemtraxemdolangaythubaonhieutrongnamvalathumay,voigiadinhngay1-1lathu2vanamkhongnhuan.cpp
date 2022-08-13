#include<stdio.h>
int main(){
	int n,t;
	do{
		printf("Nhap ngay:\n");
		scanf("%d",&n);
		printf("Nhap thang:\n");
		scanf("%d",&t);
		if(n<=0 || n>31 || t<=0 ||t>12){
			printf("Ban da nhap sai, vuilong nhap lai!\n");
		}
	}while (n<=0 || n>31 || t<=0 ||t>12);
	
	switch(t){
		case 1: 
		if((n%7)==0){
			printf("Ngay thu %d va la chu nhat",n);
		}else{
			printf("Ngay thu %d va la thu %d",n,(n%7)+1);
		}
		break;
		case 2:
		if((n+31)%7==0){
			printf("Ngay thu %d va la chu nhat",n+31);
		}else{
			printf("Ngay thu %d va la thu %d",n+31,(n+31)%7+1);
		} 
		break;
		case 3:
		if((n+31+28)%7==0){
			printf("Ngay thu %d va la chu nhat",n+31+28);
		}else{
			printf("Ngay thu %d va la thu %d",n+31+28,(n+31+28)%7+1);
		} 
		break;
		case 4: 
		if((n+31+28+31)%7==0){
			printf("Ngay thu %d va la chu nhat",n+31+28+31);
		}else{
			printf("Ngay thu %d va la thu %d",n+31+28+31,(n+31+28+31)%7+1);
		} 
		break;
		case 5: 
		if((n+31+28+31+30)%7==0){
			printf("Ngay thu %d va la chu nhat",n+31+28+31+30);
		}else{
			printf("Ngay thu %d va la thu %d",n+31+28+31+30,(n+31+28+31+30)%7+1);
		} 
		break;
		case 6: 
		if((n+31+28+31+30+31)%7==0){
			printf("Ngay thu %d va la chu nhat",n+31+28+31+30+31);
		}else{
			printf("Ngay thu %d va la thu %d",n+31+28+31+30+31,(n+31+28+31+30+31)%7+1);
		} 
		break;
		case 7: 
		if((n+31+28+31+30+31+30)%7==0){
			printf("Ngay thu %d va la chu nhat",n+31+28+31+30+31);
		}else{
			printf("Ngay thu %d va la thu %d",n+31+28+31+30+31+30,(n+31+28+31+30+31+30)%7+1);
		} 
		break;
		case 8: 
		if((n+31+28+31+30+31+30+31)%7==0){
			printf("Ngay thu %d va la chu nhat",n+31+28+31+30+31+30+31);
		}else{
			printf("Ngay thu %d va la thu %d",n+31+28+31+30+31+30+31,(n+31+28+31+30+31+30+31)%7+1);
		} 
		break;
		case 9: 
		if((n+31+28+31+30+31+30+31+31)%7==0){
			printf("Ngay thu %d va la chu nhat",n+31+28+31+30+31+30+31+31);
		}else{
			printf("Ngay thu %d va la thu %d",n+31+28+31+30+31+30+31+31,(n+31+28+31+30+31+30+31+31)%7+1);
		} 
		break;
		case 10: 
		if((n+31+28+31+30+31+30+31+31+30)%7==0){
			printf("Ngay thu %d va la chu nhat",n+31+28+31+30+31+30+31+31+30);
		}else{
			printf("Ngay thu %d va la thu %d",n+31+28+31+30+31+30+31+31+30,(n+31+28+31+30+31+30+31+31+30)%7+1);
		} 
		break;
		case 11: 
		if((n+31+28+31+30+31+30+31+31+30+31)%7==0){
			printf("Ngay thu %d va la chu nhat",n+31+28+31+30+31+30+31+31+30+31);
		}else{
			printf("Ngay thu %d va la thu %d",n+31+28+31+30+31+30+31+31+30+31,(n+31+28+31+30+31+30+31+31+30+31)%7+1);
		} 
		break;
		case 12:
		if((n+31+28+31+30+31+30+31+31+30+31+30)%7==0){
			printf("Ngay thu %d va la chu nhat",n+31+28+31+30+31+30+31+31+30+31+30);
		}else{
			printf("Ngay thu %d va la thu %d",n+31+28+31+30+31+30+31+31+30+31+30,(n+31+28+31+30+31+30+31+31+30+31+30)%7+1);
		} 
		break;
	}
}
