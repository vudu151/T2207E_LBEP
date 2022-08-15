#include<stdio.h>
void nhap(int a[], int &n){
        printf("Nhap so phan tu mang: ");
        scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
}
int kiemtra_NT(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
void insonguyento(int a[], int n){
    printf("\nCac so nguyen to co trong mang la: ");
    for(int i=0;i<n;i++)
        if(kiemtra_NT(a[i]))
            printf("\n%d",a[i]);
}
int main(){
    int a[100];
    int n;
    nhap(a,n);
    insonguyento(a,n);
    return 0;
}
