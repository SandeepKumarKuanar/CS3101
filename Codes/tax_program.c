//Computing the tax payable

#include<stdio.h>


int main()
{
	int T;
	
	float Intermediate_tax, Cess, Income_tax;
	
	printf("Give your Gross Total Income: ");
	scanf("%d", &T);
	
	//I assume that income can't be negative
	
	if(T <= 250000)//No tax
	{
		Intermediate_tax = 0.0;
	}
	else if (T <= 500000) //T > 2,50,000 and T <= 5,00,000 INR
	{
		Intermediate_tax = (5.0/100.0)*(T - 250000);
	}
	else if (T <= 750000) // T > 5,00,000 and T <= 7,50,000 INR
	{
		Intermediate_tax = 12500 + (10.0/100.0)*(T - 500000);
	}
	else if (T  <= 1000000) // T > 7,50,000 and T <= 10,00,000
	{
		Intermediate_tax = 37500 + (15.0/100.0)*(T - 750000);
	}
	else if (T <= 1250000) // T > 10,00,000 and T <= 12,50,000
	{
		Intermediate_tax = 75000 + (20.0/100.0)*(T - 1000000);
	}
	else if (T <= 1500000) // T > 12,50,000 and T <= 15,00,000
	{
		Intermediate_tax = 125000 + (25.0/100.0)*(T - 1250000);
	}
	else
	{
		Intermediate_tax = 187500 + (30.0/100.0)*(T - 1500000);
	}
	
	Income_tax = Intermediate_tax + (4.0/100.)*Intermediate_tax;
	
	printf("Income tax payable is Rs. %.2f\n", Income_tax);
	
	



}
