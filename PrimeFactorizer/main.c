#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main()
{
	int input;
	printf("Enter a number and the program will find all Prime Factors "
			"(if there are any) and display them: ");
	scanf("%d", &input);
	if(input < 0 || input > ULLONG_MAX)
	{
		printf("Error! Error!"); // Send error if the input is faulty
	}
	else
	{
		int i;
		int local_temp = input;
		for(i = 2; i < input; ++i)
		{
			if(local_temp % i == 0 && local_temp/i != 1)
			{
				printf("%d * ", i);
				local_temp /= i;
				i = 1;
			}
			else if(local_temp % i == 0 && local_temp/i == 1)
			{
				printf("%d", i);
				local_temp /= i;
				i = 1;
			}
		}
	}
	return 0;
}


//sernatin
//skunkworks1
