#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int unit,price,amount,tax,total;
 printf("Enter Your unit:-");
 scanf("%ld",&unit);
 price=5;
 amount=unit*price;
 printf("Amount=%ld\n",amount);
 tax=(amount*20)/100;
 printf("Tax=%ld\n",tax);
 total=amount+tax;
 printf("Amount pay=%ld",total);

 getch();
}