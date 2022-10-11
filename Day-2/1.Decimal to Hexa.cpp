#include<stdio.h>
int main() 
{
	printf("**********---------Decimal to Hexadecimal conversion---------**********\n\n");
	long int decimalNumber;
	printf("Enter any decimal number: ");
	scanf("%d",&decimalNumber);
	printf("Equivalent hexadecimal number is: %X",decimalNumber);
	return 0;
}



//Method - 2
/******
#include <stdio.h>
int main()
{
    long deci, quo, rem;
    int i, j = 0;
    char hexa[100];
    printf("Enter decimal number: ");
    scanf("%ld", &deci);
    quo=deci;
    while(quo!=0)
    {
        rem= quo% 16;
        if (rem<10)
        {
            hexa[j++] = 48 + rem;
    	}
		else
		{
            hexa[j++] = 55 + rem;
    	}
		quo=quo/16;
    }
    // display integer into character
    printf("Hexadecimal value of %d is : ",deci);
    for (i = j; i >= 0; i--)
    {
	    printf("%c", hexa[i]);
	}	
	return 0;
}
*******/

//Method - 3
/******
#include <stdio.h>
#include <conio.h>
int main()
{
	unsigned long dec;
	int hexa[25],c=0,i;
	printf("Enter decimal number: ");
	scanf("%lu",&dec);
	printf("\n%lu in Hexadecimal format: ",dec);
	while(dec>0)
	{
		hexa[c]=dec%16;
		dec=dec/16;
		c++;
	}
	for(i=c-1;i>=0;i--)
	{
		if(hexa[i]>=10)
			printf("%c",hexa[i]+55);
		else
			printf("%d",hexa[i]);
	}
	return 0;
}
******/