#include <stdio.h>
#include <math.h>

double F(double x){
    if (x<10) return (-pow(x,30)+cos(0.25*x)-5);
    else if (x>=10&&x<=20) return (log(pow(x,2)+1)+x);
    else return 9+x;
}

int main(){
    int k;
    do{
        printf("Nhap k(5<=k<=100): ");
        scanf("%d",&k);
    }while(k<5||k>100);
    
    double Q[k];
    for (int i=0;i<k;++i){
        printf("Nhap Q[%d]=",i+1);
        scanf("%lf",&Q[i]);
    }

    double Y[k];
    int d=0;
    for (int i=0;i<k;++i){
        if (F(Q[i])>=0){
            Y[d]=Q[i];
            d++;
        }
    }

    int count=0;
    for (int i=0;i<k;++i){
        if (Y[i]>10&&Y[i]<100) count++;
    }
    printf("%d",count);

    return 0;
}