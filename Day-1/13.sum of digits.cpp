#include<stdio.h>
int main()
{
	int n,re,sum=0;
	printf("Enter number: ");
	scanf("%d",&n);
	while(n>0)
	{
		re=n%10;
		sum+=re;
		n=n/10;
	}
	printf("Sum= %d",sum);
}