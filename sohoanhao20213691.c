#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int sum=0;
    printf("Nhap N: ");scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("%d\n",i);
        }
        sum=0;
    }
    return 0;
}