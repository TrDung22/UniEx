#include <stdio.h>
#include <math.h>
int main(){
    int n,k;
    double a[101],tmp;
    do{
        printf("Nhap n: ");
        scanf("%d",&n);
    }while(n<10||n>100);
    for (int i=0;i<n;i++){
        printf("\na[%d] = ",i+1);
        scanf("%lf",&a[i]);
    }
    printf("\nNhap so k (k<n): ");scanf("%d",&k);
    if (k>=n) printf("\nNhap lai k: ");
    else{
        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
        printf("\n%d phan tu lon nhat: ");
        for (int i=0;i<k;i++){
            printf("%lf",a[i]);
        }
    }
    return 0;
}