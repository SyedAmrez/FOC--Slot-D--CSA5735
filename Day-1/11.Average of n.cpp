#include<stdio.h>
int main()
{
	int i,n;
	float a[100],sum=0,avg;
	printf("Enter the number of integers: ");
	scanf("%d",&n);
	printf("Enter integers: ");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	avg=sum/n;
	printf("\nSum of given numbers= %.2f",sum);
	printf("\nAverage of given numbers= %.2f",avg);
	return 0;
}