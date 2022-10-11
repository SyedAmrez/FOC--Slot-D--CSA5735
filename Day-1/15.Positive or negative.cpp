#include<stdio.h>
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is Positive integer",n);
	}
	else if(n<0)
	{
		printf("%d is Negative integer",n);
	}
	return 0;
}