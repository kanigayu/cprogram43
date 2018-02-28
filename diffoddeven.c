#include<stdio.h>
signed int main()
{
int k,n,l;
scanf("%d\t%d",&k,&n);
l=k-n;
if(l%2==0)
{
printf("even");
}
else
printf("odd");
return 0;
}
