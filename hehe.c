#include <stdio.h>
#include <math.h>

void cs(int n,int b){
    if (n==0) return;
    cs(n/b,b); printf("%d",n%b);
}
int main(){
    int a,b=1;
    a=-2;
    b*=a?2:1;
    printf("%d",b);
    return 0;
}