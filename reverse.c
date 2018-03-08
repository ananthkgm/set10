#include <stdio.h>
int main()
{
	int a,remain,n,result;
	scanf("%d",&a);
	n=a;
	while(n!=0)
	{
		remain=n%10;
		result=result*10+remain;
		n=n/10;
	}
printf("the reverse is %d",result);
return 0;
}
