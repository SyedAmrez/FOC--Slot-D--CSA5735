#include<stdio.h>
int main() 
{
	printf("**********---------Octal to Decimal conversion---------**********\n\n");
	long int octalnum;
	printf("Enter any Octal number : ");
	scanf("%o",&octalnum);
	printf("Equivalent Decimal number is: %d",octalnum);
	return 0;
}


//Method - 2
/***
#include <stdio.h>
#include <math.h>
 
int main()
{
 
    long int octal, decimal = 0;
    int i = 0,rem;
    printf("Enter any octal number: ");
    scanf("%ld", &octal);
    while (octal != 0)
    {
    	rem=octal%10;
        decimal =  decimal +rem* pow(8, i++);
        octal = octal / 10;
    }
    printf("Equivalent decimal value: %ld",decimal);
    return 0;
}
***/