#include<stdio.h>
int main()
{
int n,k=0,x=1,i;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
k++;
}
for(i=0;i<=k;i++)
{
x=x*2;
}
printf("%d",x);
return 0;
}
