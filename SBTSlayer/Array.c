#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[10000];
    for (int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }

    int brr[10000];
    for (int i=1;i<n;++i){
        brr[0]=-1;
        for (int j=i-1;j>=0;--j){
            if (arr[i]>arr[j]) {
                brr[i]=arr[j];
                break;
            }
            else {
                brr[i]=-1;
            }
        }
    }

    for (int i=0;i<n;++i){
        printf("%d ",brr[i]);
    }
    
    return 0;
}