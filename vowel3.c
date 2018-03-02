#include<stdio.h>
#include<string.h>
int main()
{
char k[10];
int f=0,i;
gets(k);
for(i=0;k[i]!='\0';i++)
{
if((k[i]=='a')||(k[i]=='e')||(k[i]=='i')||(k[i]=='o')||(k[i]=='u')||(k[i]=='A')||(k[i]=='E')||(k[i]=='I')||(k[i]=='O')||(k[i]=='U'))
{
f=1;
}
}
if(f>=1)
{
printf("vowel");
}
else
{
printf("no vowel");
}
return 0;
}
