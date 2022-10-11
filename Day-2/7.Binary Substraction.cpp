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
	printf("\n");
}
// function for Binary Addition
int binAddition(int a, int b)
{
    int c; //carry
    while (b != 0) 
	{
        //find carry and shift it left
        c = (a & b) << 1;
        a = a ^ b;
        b = c;
    }
    return a;
}

// function for Binary Subtraction
int binSubtracton(int a, int b)
{
    int carry;
    //get 2's compliment of b and add in a
    b = binAddition(~b, 1);
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
	printf("-------******Binary Subtraction******-------\n\n");
    int number1, number2, binAdd, binSub;
    printf("Enter decimal number1: ");
    scanf("%d", &number1);
    printf("Binary form of %d: ",number1);
	binary(number1);
    
	printf("Enter decimal number2: ");
    scanf("%d", &number2);
	printf("Binary form of %d: ",number2);
	binary(number2);
	
    binSub = binSubtracton(number1, number2);
    printf("Subtraction of numbers in Decimal form= %d\n", binSub);
	printf("Subtraction of numbers in Binary form= ");
	binary(binSub);
    return 0;
}