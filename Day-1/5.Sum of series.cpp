#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Sum numbers till: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum of the numbers upto %d = %d",n,sum);
	return 0;
}