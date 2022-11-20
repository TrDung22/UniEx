#include <stdio.h>

int sumOfDigits(int n){
    int sum = 0;
    while (n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Ket qua: %d",sumOfDigits(n));
    return 0;
}