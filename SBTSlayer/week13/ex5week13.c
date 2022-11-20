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
    int tmp;
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            if(a[i]>a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    
    int m,v;
    printf("Nhap gia tri can chen: ");scanf("%d",&m);
    printf("Nhap vi tri can chen: ");scanf("%d",&v);
    if(v<1) v=1;
    if(v>n) v=n+1;
    for(int i=n;i>v-1;--i){
        a[i]=a[i-1];
    }
    a[v-1]=m;
    n++;

    printf("Day so sau khi sap xep va chen: ");
    for(int i=0;i<n;++i){
        printf("%d ",a[i]);
    }
    return 0;    
}