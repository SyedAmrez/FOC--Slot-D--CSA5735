#include<stdio.h>
int main() 
{
	printf("**********---------Decimal to Octal conversion---------**********\n\n");
	long int decimalNumber;
	printf("Enter any decimal number : ");
	scanf("%d",&decimalNumber);
	printf("Equivalent octal number is: %o",decimalNumber);
	return 0;
}
//Method - 2
/**
#include<stdio.h>
int main() 
{
	long int decimalNumber,remainder,quotient;
	int octalNumber[100],i=1,j;
	printf("Enter any decimal number: ");
	scanf("%ld",&decimalNumber);
	quotient = decimalNumber;
	while(quotient!=0) {
		octalNumber[i++]= quotient % 8;
		quotient = quotient / 8;
	}
	printf("Equivalent octal value of decimal number %d: ",decimalNumber);
	for (j = i -1 ;j> 0;j--)
	      printf("%d",octalNumber[j]);
	return 0;
}
**/