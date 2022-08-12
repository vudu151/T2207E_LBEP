#include<stdio.h>
#include<string.h>
int main(){
	char s[20];
	printf("Nhap: ");
	scanf("%s",s);
	for(int i=0;i< strlen(s);i++){
		if(s[i]>=97 && s[i]<=122){
			s[i]-=32;
		}
	}
	printf("Day chu hoa la: %s",&s);
}
