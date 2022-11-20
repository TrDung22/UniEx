#include <stdio.h>
#include <string.h>

int main(){
	char c[10000];
	printf("Nhap chuoi ban muon thay doi: ");
	fflush(stdin);gets(c);
	for (int i=0;i<strlen(c)-1;++i){
		if(c[i] == ','|| c[i]=='.'||c[i]==';' || c[i] ==':'||c[i] == '?'||c[i] =='!'){
			c[i] =' ';
		}
	}
	printf("Chuoi da thay doi: ");
	for (int i=0;i<strlen(c);++i){
		printf("%c",c[i]);
	}
    return 0;
}