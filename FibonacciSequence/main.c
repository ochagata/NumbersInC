#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int input;
	printf("Enter a number and have the program generate the "
			"Fibonacci sequence to that number or to the Nth number: ");
	scanf("%d", &input);
	if(input < 0 || input > 89)
	{
		printf("Error! Error!"); // Send error if the input is faulty
	}
	else
	{
		unsigned long long output = 0;
		unsigned long long lastNumber = 0;
		int i;
		for( i = 0; i < input; i++)
		{
			if(input == 1 || i == 1)
			{
				output = 1;
			}
			output += lastNumber;
			lastNumber = output - lastNumber;
		}
		printf("%llu", output);
	}
	return 0;
}
