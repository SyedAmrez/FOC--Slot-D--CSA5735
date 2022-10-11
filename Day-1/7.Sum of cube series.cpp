#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum=0;
	printf("Sum of cube numbers till: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		//sum=sum+i*i*i;
		sum=sum+pow(i,3);
	}
	printf("Sum of the cube series till %d = %d",n,sum);
	return 0;
}