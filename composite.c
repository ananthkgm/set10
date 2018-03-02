#include <stdio.h>
int main()
{
	int b,i,count=0;
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		if(b%i==0)
		count++;
	}
	if(count>2)
	printf("%d is the composite number",b);
	else
	printf("%d is not composite number",b);
	return 0;
}
