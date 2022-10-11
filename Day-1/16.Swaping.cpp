#include<stdio.h>
int main()
{
	int temp,a,b;
	printf("A: ");
	scanf("%d",&a);
	printf("B: ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swaping numbers: ");
	printf("\nA= %d \nB= %d ",a,b);
	return 0;
}