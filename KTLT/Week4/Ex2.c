#include <stdio.h>

int main(){

    printf("Choose a number to get order:\n");
    printf("1.Banana\n2.Chocolate banana\n3.Bananan't\n");

    int n;
    do{
        scanf("%d",&n);
    }while(n<1||n>3);

    switch (n)
    {
    case 1:
        printf("Here's your Banana. Enjoy your meal!");
        break;
    
    case 2:
        printf("Here's your Chocolate banana. Enjoy your meal!");
        break;
    
    case 3:
        printf("Here's your Bananan't. Enjoy your meal!");
        break;

    }

    return 0;
}