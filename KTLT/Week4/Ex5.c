#include <stdio.h>

void enterArr(int a[10000],int n){
    scanf("%d",&n);
    for (int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
}

void arrC(int a[10000],int b[10000],int n1,int n2){
    int c[10000];
    if (n1>n2) n2=n1;
    for (int i=0;i<n2;++i){
        
    }
}

int main(){
    int a[10000],b[10000],n1,n2;
    enterArr(a[10000],n1);
    enterArr(b[10000],n2);
    
    return 0;
}