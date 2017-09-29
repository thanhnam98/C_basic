#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main()
 {
     float a,b;
     printf(" nhap vao so a=");
     scanf("%f",&a);
     b= a-int(a);
	     if(b==0.5) printf("b la so ban nguyen");
    else printf("b khong phai so ban nguyen");
     getch();
 }
    
