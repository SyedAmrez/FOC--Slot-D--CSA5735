#include<stdio.h>
int main()
{
	int n,re,rev=0;
	printf("Enter number: ");
	scanf("%d",&n);
	while(n>0)
	{      
		re=n%10;
		rev=rev*10+re;
		n=n/10;    
	}
	printf("Reverse= %d",rev);
}