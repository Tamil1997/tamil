#include<stdio.h>
#include<conio.h>
main()
{
int year;
printf("\n enter the year");
scanf("%d",&year);
if((year%4==0)&&((year%100!=0)||(year%400==0)))
printf("\n the given year is leap year");
else
printf("\n the given year is not a leap year");
getch();
}
