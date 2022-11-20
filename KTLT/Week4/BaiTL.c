#include <stdio.h>
#include <string.h>
struct iPhone 
{
    char model[50];
    int bprice;
    int sprice;
    int quantity;
    int squantity;
    struct date 
	{
        int day;
        enum month{January,February,March,April,May,June,July,August,Septembe,OctoberNovember,December};
        int year;
    };
};

int stonk(struct iPhone ip){
    int lai = ip.squantity * ip.sprice - ip.bprice * ip.quantity;
    return lai;
}

iPhone* FindMax( struct iPhone ip[], int CountModel){
    int index = 0;
    int max = Count(ip[0])*ip[0].squantity;
    for (int i = 0 ; i < CountModel; i++){
       
        if(Count(ip[i])*ip[i].squantity > max){
           max = Count(ip[i]);
           index = i;
        }
     
     }
    
    return &ip[index];
}

#define MSSV 20213691
struct iPhone arrIphone[11]; 
void printIphone(){
    int money = 0;
    for (int i = 0; i < (11); i++){
        money = Count(arrIphone[i])*arrIphone[i].sprice;
        if(money > 100000000){
            printf("Mau dien thoai co doanh thu tren 100 trieu: %s", arrIphone[i].model);
        }
        
    }
}
