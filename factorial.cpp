#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int factorial(int n);

main()
{
	int number, fact;

	printf("Enter an integer: ");
	number = GetInteger();

	fact = factorial(number);

	printf("%d! = %d\n", number, fact);
}

// Definition for function factorial

int factorial(int n)
{
	if(n==0)
		return (1);
	else
		return (n * factorial(n-1));
}

