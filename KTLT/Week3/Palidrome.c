#include <stdio.h>
#include <string.h> 

int PalidromeChecker(char s[]){
    size_t len = strlen(s);
	for(int i=0; i<len/2; i++){
		if(s[i]!=s[len-i-1])
			return 0;
	}
	return 1;
}

void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}


int main(){
    char s[50];
	printf("Nhap s = ");
	fgets(s, sizeof(s), stdin);
    xoaXuongDong(s);
	if (PalidromeChecker(s)){
		printf("Day la chuoi Palidrome");
	}
    else {
		printf("Day khong phai chuoi Palidrome");
	}
    return 0;
}