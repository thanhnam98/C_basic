#include <stdio.h>
#include <math.h>
#include <conio.h>
main()
{
float a,b,c,delta,x1,x2,g;
printf("\n nhap vao he so a = ");scanf("%f",&a);
printf("\n nhap vao he so b = ");scanf("%f",&b);
printf("\n nhap vao he so c = ");scanf("%f",&c);
delta = b*b - 4*a*c;
if(delta >=0)
{
if(delta >0)
{
x1 =(-b+sqrt(delta))/(2*a);
x2 =(-b-sqrt(delta))/(2*a);
if(x1>=0)
{
g= sqrt(x1);
printf("Nghiem thu nhat x1 = %0.3f\n",g);
printf("Nghiem thu hai x2 = %0.3f\n",-g); 
}
if(x2>=0)
{
g = sqrt(x2);
printf("Nghiem thu ba x3 = %0.3f\n",g);
printf("Nghiem thu tu x4 = %0.3f\n",-g);
}
if((x1<0) && (x2<0))
printf("Phuong trinh vo nghiem\n");
}
else if(delta == 0)
{
x1 = -b/(2*a);
if(x1>= 0)
{
g = sqrt(x1);
printf("Nghiem thu nhat x1 = %0.3f\n",g);
printf("Nghiem thu hai x2 = %0.3f\n",-g);
}
else 
printf("Phuong trinh vo nghiem\n");
}
}
else if(delta <0)
printf("Phuong trinh vo nghiem\n"); 
getch();
}
