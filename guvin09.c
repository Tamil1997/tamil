#include<stdio.h>
#include<conio.h>
main()
{
int n,count=0;
printf("\n enter the number");
scanf("%d",&n);
do{
n=n/10;
count++;
}while(n!=0);
printf("\n the count is %d",count);
getch();
}