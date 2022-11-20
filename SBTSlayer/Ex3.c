#include <stdio.h>
#include <math.h>

double C(double r){
    return 2*3.14*r;
}

double S(double r){
    return 3.14*r*r;
}

int main(){
    double r;
    printf("Nhap gia tri r:");scanf("%lf",&r);
    printf("Chu vi: %lf",C(r));
    printf("\nDien tich: %lf",S(r));
    return 0;
}