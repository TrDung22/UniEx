#include <stdio.h>

int main(){
    double sum=0;

    for (int i=3;i<99;i+=2){
        sum += (1.0/i);
    }

    printf("%lf",sum);
    
    return 0;
}