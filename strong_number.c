#include<stdio.h>

int a=0,b=0,c=0,d=0,e=0,f=0;
int factorial();
int main()
{
scanf("%d",&a);
b=a;
for(;b>0;)
{
c=b%10;
f=factorial(c);
d=d+f;
b=b/10;
}
if(d==a)
{printf("its a strong number");}
else
{printf("its not a strong number");}
return 0;
}
int factorial(int e)
{
if(e>1)
return(e*factorial(e-1));
else if(e==1)
return 1;



}
