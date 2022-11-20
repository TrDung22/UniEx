#include <stdio.h>
#include <math.h>
int main(){
    int a[10],n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int pmax=a[0]+a[1];
    if (n==1) pmax=0;
    for (int i=0;i<n-1;i++){
        if ((a[i]+a[i+1])>pmax) pmax=a[i]+a[i+1];
    }
    printf("%d",pmax);
    return 0;
}