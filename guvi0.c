#include <stdio.h>
#include<conio.h>
main()
{
    int n;
    printf("\n enter the number");
    scanf("%d",&n);
    if(n>0)

        printf("the given number is positive");
       else if(n<0)
            printf("\n the given number is negative");
         else
            printf("\n the given number is zero");

    getch();
}
