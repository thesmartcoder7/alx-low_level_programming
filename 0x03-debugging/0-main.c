#include <stdio.h>
/**
* main - Entry point
*
* Description: This file tests the positive-negative function
*
* Return: Always 0 ( success )
*/

int main(void)
{
	if (positive_or_negative(0) == "0 is zero")
		printf("Correct output");
	else
		printf("Incorrect output");

	return (0);
}

