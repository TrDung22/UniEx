#include <stdio.h>
#include <math.h>

int main(){
    double x,y,z,max;
    printf("Nhap x,y,z:");scanf("%lf %lf %lf",&x,&y,&z);
    max=((x>y)?x:y)>z?((x>y)?x:y):z;
    printf("%lf",max);
    return 0;

}