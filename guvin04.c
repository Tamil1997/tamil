#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
printf("\n enter the number for a");
scanf("%d",&a);
printf("\n enter the number for b");
scanf("%d",&b);
printf("\n enter the number for c");
scanf("%d",&c);
if(a>b)
printf("\nthe largest number is a");
else
printf("\n the largest number is b");
else if(b>c)
printf("\n the largest number is b");
else
printf("\n the largest number is c");
getch();
}