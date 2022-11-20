#include <stdio.h>
#include <string.h>

int main(){
    char s[26];
    do{
        printf("Nhap xau:");
        gets(s);
    }while(strlen(s)>25);
    char c=s[0];
    int count=0;
    for(int i=0;i<strlen(s);++i){
        if(s[i]==c) count++;
    }
    printf("%d",count);
    return 0;
}