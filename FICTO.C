//Program to find fictorial of desired number
#include"stdio.h"
#include<conio.h>
void main()
{
int x;
long int a,f;
clrscr();
printf("Enter number of which you find fictorial(number <=15)=");
scanf("%ld",&a);
x=1;
f=1;
while(x<=a)
{
f=f*x;
x++;
}
printf("\nfictorial of %ld = %ld",a,f);
getch();
}
