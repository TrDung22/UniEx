#include <stdio.h>
#include <math.h>

double f(double x){
    if (x>=0) return (3*pow(x,2)-2*x+5);
    else return ((2*pow(x,2)+1)/x);
}

int main(){
    double x;
    printf("Nhap x:");scanf("%lf",&x);
    printf("\nf(x)=%lf",f(x));
    return 0;
}