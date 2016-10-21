#include<stdio.h>
#include<conio.h>
main()
{
int n,i,a,sum=0;
printf("\n enter the number");
scanf("%d",&n);
printf("\n enter the %d values ",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a);
sum=sum+a;
}
printf("\n the sum is %d",sum);
getch();
return 0;
}
