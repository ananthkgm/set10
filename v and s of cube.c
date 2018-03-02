#include <stdio.h>
int main() 
{
	int l,b,h;
	scanf("%d %d %d",&l,&b,&h);
	int v,s;
	v=l*b*h;
	s=2*((l*b)+(b*h)+(h*l));
	printf("VOLUME=%d",v);
	printf("\nSURFACE=%d",s);
	return 0;
}
