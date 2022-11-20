#include <stdio.h>
#include <math.h>

int main(){
    int a[101],n;
    int min=a[0];
    int count=0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        printf("a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;++i){
        if((a[i]%2==0)&&(a[i]<min)){
            count++;
            min=a[i];
        }
    }
    if(count==0) printf("\nDay khong co so chan");
    else printf("So chan nho nhat: %d",min);
    return 0;
}