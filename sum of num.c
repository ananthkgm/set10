#include<stdio.h>
int main()
{
           int n,a[10],i,sum=0;
           scanf("%d",&n);
           for(i=1;i<=n;i++)
           {
           scanf("%d",&a[i]);
           }
           for(i=1;i<=n;i++)
           {
           sum=sum+a[i];
           }
           printf("%d",sum);
	         return 0;
}
