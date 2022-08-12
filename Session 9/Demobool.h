#include<stdio.h>
bool ktTamgiac(int a,int b,int c){
	return a+b>c && b+c>a && a+c>b;
}
