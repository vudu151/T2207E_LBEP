#include<stdio.h>
#include<string.h>
void uppercase(char str[]){
	for(int i=0;i< strlen(str);i++){
		if(str[i]>=97 && str[i]<=122){
			str[i]-=32;
		}
	}
}
int main(){
	char s[20];
	printf("Nhap chuoi: ");
	scanf("%s",s);
	uppercase(s);
	printf("Chuoi sau khi chuuyen: %s",s);
}
