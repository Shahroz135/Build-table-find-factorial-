//Program to build table of desire number
#include"stdio.h"
#include<conio.h>
void main()
{
int n,x;
clrscr();
printf("Enter the integer number for printing the table of that number: ");
scanf("%d",&n);
x=1;
while(x<=10)
{
printf("\n%d * %d = %d\n",n,x,n*x);
x++;
}
getch();
}