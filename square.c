#include <stdio.h>
int main() 
{
int n=0,a=0,b=0,c=0,d=0,e=0,h=0;
scanf("%d",&n);
a= (2*n)-1;
int arr[a];
b=n;
c=a;

for(int p=0;p<a;p++) // initializing array
{  arr[p]=n;    }
for(int i=0;i<a;i++) 
{
if(b>=1)  // upper part
{for(int s=d;s<c;s++)
{ arr[s]=b;               }
d++;
c=c-1;
b=b-1;
h=b;
}

else if(h>=0)
{  
if(h==0)
{d--;
c++;
h++;}        

d--;
c++;
h++;
for(int s=d;s<c;s++ )
{
arr[s]=h;
}

}
for(int q=0;q<a;q++)  //printing
{printf("%d ",arr[q]);}
printf("\n");
}
}
