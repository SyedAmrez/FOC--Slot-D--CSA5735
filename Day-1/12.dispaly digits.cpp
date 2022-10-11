#include<stdio.h>
int main()
{
	int n,re,rev,i=1,r;
	printf("Enter number: ");
	scanf("%d",&n);
	while(n>0)
	{
		re=n%10;
		rev=rev*10+re;
		n=n/10;
	}	
	while(rev>0)
	{
		r=rev%10;
		printf("%d. Digit = %d\n",i++,r);
		rev=rev/10;     
	}
}