#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int input;
	printf("Enter a number between 0 and 20 and the program "
			"will generate PI up to that many decimal places: ");
	scanf("%d", &input);
	if(input < 0 || input > 20)
	{
		printf("Error! Error!"); // Send error if the input is faulty
	}
	else
	{
		char Output[255] = "%."; // Declare output string
		char inputChar[25] =""; // Make char for the input
		sprintf(inputChar, "%d", input); // Put input into the char
		strcat(Output,inputChar); // Concatenate the input char
		strcat(Output,"f"); // Concatenate the 'f'
		printf(Output, M_PI); // Output final result
	}
	return 0;
}
