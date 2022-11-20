#include <stdio.h>

int *max(int *a, int k){
	int b=*a;
	for (int i=0;i<k;++i){
		if(*(a+i)>b){
			b=*(a+i);
		}
	}
	int *rs=&b;
	return rs;
}

int main(){
	printf("Nhap mot mang co 10 phan tu nguyen\n");
	int arr[10];
	printf("Nhap cac phan tu mang: ");
	for (int i=0;i<10;++i){
		scanf("%d",&arr[i]);
	}
	int *res;
	res = max(arr,10);
	printf("Phan tu lon nhat trong mang: %d ",*res);
    return 0;
}
