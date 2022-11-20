#include <stdio.h>

int main(){
    int a[10000],n,i,b[2];
    int count1=0;
    int count2=0;
    printf("Enter an decimal: ");
    scanf("%d",&n);

    for (i=0;n>0;++i){
        a[i]=n%2;
        n/=2;
        b[a[i]]++;
    }

    printf("\nBinary number: ");
    for (i=i-1;i>=0;--i){
        printf("%d",a[i]);
    }
    printf("\nNumbers of '0': %d",b[0]);
    printf("\nNumbers of '1': %d",b[1]);
    return 0;
}