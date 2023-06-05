//circle area dynemic
#include<stdio.h>
#include<conio.h>
void main()
{

   clrscr();
   int r;
   float pi=3.14,ans;
   printf("Enter your radius:");
   scanf("%d",&r);
   ans=pi*r*r;
   printf("your circel area is %f",ans);

   getch();
}