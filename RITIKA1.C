#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
 {
  int n,i;
  printf("enter the number");
  scanf("%d",&n);
 for(i=n;i>0;i/=10)
 {
 p++;
 }
 for(j=n;j>0;j/=10)
 {
 s=s+pow(j%10,p);
 p--;
 }
 if(s==n)
 printf("dasium number");
 else
 printf("not dasium number");
 getch();
 }
