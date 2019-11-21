#include<stdio.h>
void main()
{
int a=0,b=1,c=1,d=0,e=0,f=1,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,p=0,q=0,r=1;
printf("enter a number \n");
scanf("%d",&a);
c=a;
h=1;
i=1;
j=1;
k=a-1;
n=a-1;
q=a-1;

for(;i<a;)
{
for(m=1;m<=k;)
{
 printf("\t");
 m++;
}
for(j=1;j<=h;)
{
 printf("%d\t",j);
j++;

}
h++;
j=j-2;
for(;j>=1;)
{
 
printf("%d\t",j);
j--;
}
i++;
printf("\n");
k--;
}
for(;c>=1;)
{
for(p=1;p<r;)
{
 printf("\t");
 p++;
}
for(b=1;b<=a;)
{printf("%d\t",b);
b++;}
b=b-2;
for(;b>=1;)
{printf("%d\t",b);
b--;}
a--;
c--;
printf("\n");
r++;
}
}
