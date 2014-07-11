#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main()
{
	printf("This program calculates the monthly payments of a fixed term mortgage over given\n"
			"Nth terms at a given interest rate. Also figures out how long it will take the\n"
			"user to pay back the loan.\n");
	double loanAmount = 0;
	double interestRate = 0;
	double loanTerm = 0;
	double monthlyPayments = 0;

	printf("Enter the loan Amount: $ ");
	scanf("%lf", &loanAmount);
	printf("Enter the interest Rate: %% ");
	scanf("%lf", &interestRate);
	printf("Enter the months left: ");
	scanf("%lf", &loanTerm);
	interestRate /= 100;
	interestRate /= 12;
	monthlyPayments = loanAmount * (interestRate * pow( (1 + interestRate), loanTerm) / (pow( (1 + interestRate), loanTerm) - 1));
	printf("Monthly Payments = %lf", monthlyPayments);


	return 0;
}
