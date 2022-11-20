#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{float a,x,sin=0,epsilon=0.0001,gt=1;
 int n=0,i=1;
 do {printf("Nhap vao so thuc x radian (0<=x<10) :");
     scanf("%f",&x);}
 while(x<0||x>=10);
 do {a=pow(x,i)*gt;
     if(i%4==3) sin=sin-a;
     else sin=sin+a;
     i=i+2;gt=gt/(i-1)/i;} 
 while(a>=epsilon);
 printf("\n Ta co sin(%.6f) = %.6f",x,sin);
 getch();
}