#include<stdio.h>
#include<string.h>
int Max=256;
bool timChuoi( char string str1, char string str2){
	int dem[Max]={0};
	for(int i=0;i< str1.length();i++)
	dem[str1[i]]++;
	for(int i=0;i< str2.length();i++){
		if(dem[str2[i]]==0){
			return false;
			dem[str2[i]]--;
		}
	}
	return true;
}
int main(){
	string str1 = "helloword";
	string str1 = "word";
	if(timChuoi(str1,str2)){
		printf("Yes");
	}else{
		printf("No");
	}
	
}
