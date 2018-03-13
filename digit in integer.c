#include<stdio.h>
int main()
{
int a,count=0;
scanf("%d",&a);
while(a!=0)
{
a=a/10;
++count;
}
printf("no of digit is %d",count);
return 0;
}
