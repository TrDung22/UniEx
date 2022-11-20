#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("Nhap dia chi email:");gets(s);
    int count=0;
    for(int i=0;i<strlen(s);++i){
        if(s[i]=='@'||s[i]==' ') count++;
    }
    if (count==1) printf("La dia chi email");
    else printf("Khong phai dia chi email");
    return 0;
}