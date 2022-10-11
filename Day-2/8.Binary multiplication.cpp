#include<stdio.h>
//function for decimal to binary
int binary(int deci) 
{
	long int rem,quo;
	int binary[100],i=1,j,x=0;
	quo = deci;
	while(quo!=0) 
	{
		binary[i++]= quo % 2;
		quo = quo / 2;
	}
	printf("Binary form of %d: ",deci);
	for (j = i -1 ;j> 0;j--)
	{
		x=x*10+binary[j];
	}
	printf("%d\n\n",x);
	return x;
}
//function for binary to decimal
int decimal(unsigned long num)
{
	int digit,i,pos=0,pow=1,dec=0;
	while(num!=0)
	{
		pow=1;
		digit=num%10;
		num=num/10;
		for(i=1;i<=pos;i++)
		{
			pow=pow*2;
		}
		pos++;
		dec=dec+(pow*digit);
	}
	printf("Decimal form= %d",dec);
	return 0;
}
//function for binary product
int binaryProduct(int binNum1, int binNum2)
{
    int i=0, rem=0, product=0, sum[20]={ 0 };

    while(binNum1!=0 || binNum2!=0) 
	{
        sum[i] = (binNum1 % 10 + binNum2 % 10 + rem) % 2;
        rem = (binNum1 % 10 + binNum2 % 10 + rem) / 2;
        binNum1 = binNum1 / 10;
        binNum2 = binNum2 / 10;
        i = i + 1;
    }

    if (rem != 0)
    {
    	sum[i] = rem;
	}
    while (i >= 0) 
	{
        product = product * 10 + sum[i];
        i = i - 1;
    }
    return product;
}

int main()
{
	printf("-------******Binary Multiplication******-------\n\n");
    long binNum1=0, binNum2=0, product=0;
    int digit = 0, factor=1, b1, b2;
    
	printf("Enter decimal number1: ");
    scanf("%d", &b1);
	binNum1=binary(b1);
	
    printf("Enter decimal number2: ");
    scanf("%d", &b2);
    binNum2=binary(b2);

    while(binNum2!= 0) 
	{
        digit = binNum2 % 10;
        if (digit == 1) 
		{
            binNum1 = binNum1 * factor;
            product = binaryProduct(binNum1, product);
        }
        else 
		{
            binNum1 = binNum1 * factor;
        }
        binNum2 = binNum2 / 10;
        factor = 10;
    }
	printf("Product of numbers in ");
	decimal(product);
    printf("\nProduct of numbers in Binary form= %ld", product);
    return 0;
}