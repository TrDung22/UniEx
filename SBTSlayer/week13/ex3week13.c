#include <stdio.h>
#include <math.h>

int main(){
    int a[101],n;
    int count=0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        printf("a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;++i){
        if(a[i]==((a[i-1]+a[i+1])/2)){
            count++;
        }
    }
    printf("So bo so thoa man a[i]=(a[i-1]+a[i+1])/2: ");
    if (count==0) printf("N/A");
    else printf("%d",count);
    return 0;
}