#include<stdio.h>
#include<math.h>
int songuyento (int x){
	int i, max, count=0;
	for(i=2; i<sqrt(x);i++){
		if (x%i==0){
			count= count+1;
		}
	}
	if(count==0){
		return x;
	}
}
int main(){
	int a[100];
	int i,n,max;
	scanf("%d",&n);
	if(n<=0){
		printf("ERROR\n");
	}
	else{
		for(i=0;i<n;i++){
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			songuyento(a[i]);
			max= songuyento(a[i]);
		}
		printf("so nguyen to lon nhat la %d",max);
	}
	return 0;
}
