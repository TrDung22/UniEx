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

    int sum=0;
    int p=1;
    for(int i=0;i<n;++i){
        sum+=a[i];
        p*=a[i];
    }
    printf("\nTong cua day so: %d",sum);
    printf("\nTich cua day so: %d",p);

    printf("\nSo chia het cho 3 va lon hon 10: ");
    int count1=0;
    for(int i=0;i<n;++i){
        if(a[i]%3==0&&a[i]>10){
            printf("%d ",a[i]);
            count1++;
        }
    }
    if(count1==0) printf("N/A");

    int count2=0;
    for(int i=0;i<n;++i){
        if(a[i]>=100&&a[i]<1000){
            count2++;
        }
    }
    printf("\nSo cac so nam trong doan [100,1000): ");
    if (count2==0) printf("N/A");
    else printf("%d",count2);
    return 0;
}