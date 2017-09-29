#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{

    float a,b,c,delta;
      printf("Cho biet he so a = ");
            scanf("%f", &a);
      printf("Cho biet he so b = "); 
           scanf("%f", &b);
      printf("Cho biet he so c = "); 
           scanf("%f", &c);
 delta = b*b - 4*a*c;
	  if (delta < 0)
            printf("Phuong trinh vo nghiem");
else if (delta == 0)
            printf("Phuong trinh co nghiem kep x1 = x2 = %f", -b/(2*a));
   else{
            printf ("Phuong trinh co 2 nghiem phan biet:\n x1 = %f ", (-b + sqrt(delta))/(2*a));
                        printf ("\nx2 = %f ", (-b - sqrt(delta))/(2*a));
   }
   getch();
}
