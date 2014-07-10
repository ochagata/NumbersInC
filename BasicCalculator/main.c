#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>



int main()
{
	printf("CALCULATOR\nWhat would you like to do today?\n"
			"1.Add\n"
			"2.Subtract\n"
			"3.Divide\n"
			"4.Multiply\n");
	int choice;
	scanf("%d", &choice);
	double firstNumber;
	double secondNumber;
	switch(choice)
	{
	case 1:
		printf("Adding\n"
				"Enter first Number: ");
		scanf("%lf", &firstNumber);
		printf("Enter second Number: ");
		scanf("%lf", &secondNumber);
		printf("%.2lf + %.2lf = %.2lf", firstNumber, secondNumber, firstNumber + secondNumber);
		break;
	case 2:
		printf("Subtracting\n"
				"Enter first Number: ");
		scanf("%lf", &firstNumber);
		printf("Enter second Number: ");
		scanf("%lf", &secondNumber);
		printf("%.2lf - %.2lf = %.2lf", firstNumber, secondNumber, firstNumber - secondNumber);
		break;
	case 3:
		printf("Dividing\n"
				"Enter first Number: ");
		scanf("%lf", &firstNumber);
		printf("Enter second Number: ");
		scanf("%lf", &secondNumber);
		printf("%.2lf / %.2lf = %.2lf", firstNumber, secondNumber, firstNumber / secondNumber);
		break;
	case 4:
		printf("Multiplying\n"
				"Enter first Number: ");
		scanf("%lf", &firstNumber);
		printf("Enter second Number: ");
		scanf("%lf", &secondNumber);
		printf("%.2lf * %.2lf = %.2lf", firstNumber, secondNumber, firstNumber * secondNumber);
		break;

	}
	return 0;
}
