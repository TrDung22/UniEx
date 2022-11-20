#include <stdio.h>
#include <string.h>

char *chuanhoa(char *x){
    while(*x==' ') x=x++;
    while(*(x+strlen(x))==' ')x=x--;
    return x;
}

int main(){
    char s[100],*t,*p;
    printf("Nhap ten: ");gets(s);
    t=chuanhoa(s);
    p=strrchr(t,' ');
    p+=1;
    puts(p);
    return 0;
}