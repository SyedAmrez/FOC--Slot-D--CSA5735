#include<stdio.h>
int main()
{
	int i,n,a,b,c;
	printf("Number of integers: ");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d %d ",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
}