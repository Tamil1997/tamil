#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char input;
printf("\n enter the input");
scanf("%c",&input);
if(isalpha(input)>0)
printf("\n the given input is alphabet");
else if(isdigit(input)>0)
printf("\n the given input is digit");
else
printf("\n the given input is not a alphanumeric");
getch();
}