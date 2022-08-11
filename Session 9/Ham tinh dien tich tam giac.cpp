#include<stdio.h>
#include<math.h>
double tinhDienTich(double a, double b,double c){        //Ham int , double la ham kieu tinh toan
	double p2=(a+b+c)/2;
	double s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	return s;
}
int main(){
	double x=3,y=4,z=5;
	double s=tinhDienTich(x,y,z);
	printf("Dien tich la: %lf",s);
}
