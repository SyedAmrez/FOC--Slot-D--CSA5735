#include <stdio.h>
//function for decimal to binary
int binary(int deci) 
{
	long int rem,quo;
	int binary[100],i=1,j;
	quo = deci;
	while(quo!=0) 
	{
		binary[i++]= quo % 2;
		quo = quo / 2;
	}
	for (j = i -1 ;j> 0;j--)
	    printf("%d",binary[j]);
	printf("\n");
}
// function for Binary Addition
int binAddition(int a, int b)
{
    int carry; //carry
    while (b != 0) 
	{
        //find carry and shift it left
        carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }
    return a;
}

int main()
{
	printf("-------******Binary Addition******-------\n\n");
    int number1, number2, binAdd, binSub;
    printf("Enter decimal number1: ");
    scanf("%d", &number1);
    printf("Binary form of %d: ",number1);
	binary(number1);
	
    printf("\nEnter decimal number2: ");
    scanf("%d", &number2);
    printf("Binary form of %d: ",number2);
	binary(number2);
	
    binAdd = binAddition(number1, number2);
    printf("\nAddition of numbers in Decimal form= %d", binAdd);
    printf("\nAddition of numbers in Binary form= ");
    binary(binAdd);
    return 0;
}
//Method -2
/*******
#include <stdio.h>
int main()
{
    long int binary1, binary2;
    int i = 0, rem = 0, sum[20];
    
    // Asking for Input
    printf("Enter first binary number: ");
    scanf("%ld", &binary1);
    printf("Enter second binary number: ");
    scanf("%ld", &binary2);
    
    while (binary1 != 0 || binary2 != 0)
	{
        sum[i++] = (binary1 %10 + binary2 % 10 + rem) % 2;
        rem = (binary1 %10 + binary2 % 10 + rem) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (rem != 0)
        sum[i++] = rem;
    --i;
    printf("Sum of two binary numbers is: ");
    while (i >= 0){
        printf("%d", sum[i--]);
    }
    return 0;
}
*******/