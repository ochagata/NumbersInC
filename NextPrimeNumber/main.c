#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int isPrime (int n)
{
    int j;
    for (j = 2; j < n; j++)
        if (n%j == 0)
            return 0;
    return 1;
}

int main()
{
	char input = 'y';
	printf("The program will find prime numbers until "
			"the you choose to stop the asking for the next one \n");
	int currentPrime = 2;
	while(input == 'y' || input == 'Y')
	{
		printf("%d \nWould you like the next one?\nY/N \n", currentPrime);
		scanf(" %c", &input);
		int i;
		for(i = currentPrime + 1; i < INT_MAX; ++i)
		{
			if(isPrime(i))
			{
				break;
			}
		}
		currentPrime = i;
	}
	return 0;
}
