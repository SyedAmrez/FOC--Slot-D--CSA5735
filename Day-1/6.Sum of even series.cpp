#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Sum even numbers till: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("Sum of even numbers till %d = %d ",n,sum);
	return 0;
}