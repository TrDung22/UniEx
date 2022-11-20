#include <stdio.h>
#include <math.h>

int main(){
    int a[101],n;
    do{
        printf("Nhap n: ");
        scanf("%d",&n);
    }while(n>=100);
    for(int i=0;i<n;++i){
        printf("a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    
    int min=a[0];
    for(int i=0;i<n;++i){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Min: %d",min);
    printf("\nVi tri nhung so co gia tri bang min: ");
    for(int i=0;i<n;i++){
        if(a[i]==min){
            printf("%d ",i+1);
        }
    }
    return 0;
}