#include<stdio.h>
#include<conio.h>
int f[50],p[50];
void fibonacci();
int prime(int);
void main()
{
 int i,a,b,x,choice,flag=0;
 clrscr();
 fibonacci();
 printf("enter\n1 for checking if the entered number is a fibonacci prime\n2 for printing fibonacci primes in an entered range\n");
 scanf("%d",&choice);
 switch (choice)
 {
  case 1:
  {
   printf("enter a number\n");
   scanf("%d",&x);
   for(i=0;i<50;i++)
   {
    if(x==p[i])
    {
     flag=1;
     break;
    }
   }
   if(flag==1)
   printf("%d is a fibonacci prime\n",x);
   else
   printf("%d is not a fibonacci prime\n",x);
  }
  break;
  case 2:
  {
   printf("enter lower and upper limit\n");
   scanf("%d%d",&a,&b);
   printf("fibonacci primes between %d and %d are\n",a,b);
   if(a<2)
   {
    a=2;
   }
   for(i=0;i<50;i++)
   {
    if(p[i]>=a&&p[i]<=b)
    printf("%d\n",p[i]);
   }
  }
  break;
 }
 getch();
}
void fibonacci()
{
 int a,b,i,count=0;
 a=0;
 b=1;
 f[0]=0;
 for(i=1;i<50;i++)
 {
  f[i]=b;
  b=a+b;
  a=b-a;
  if(prime(f[i])==0)
  {
   count=count+1;
   p[count-1]=f[i];
  }
 }
}
int prime(int n)
{
 int i,flag=0;
 for(i=2;i<=(n/2);i++)
 {
  if(n%i==0)
  {
   flag=1;
   break;
  }
 }
 if(flag==0)
 {
  return 0;
 }
 else
 {
  return 1;
 }
}