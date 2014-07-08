#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

void getChange(float change, int *quarters, int *dimes, int *nickels, int *pennies)
{
	if((int)change >= 25)
	{
		if((int)change % 25 == 0)
		{
			*quarters = change / 25;
		}
		else
		{
			*quarters = change / 25;
			change -= *quarters * 25;
			if((int)change >= 10)
			{
				if((int)change % 10 == 0)
				{
					*dimes = change / 10;
				}
				else
				{
					*dimes = change / 10;
					change -= *dimes * 10;
					if((int)change >= 5)
					{
						if((int)change % 5 == 0)
						{
							*nickels = change / 5;
						}
						else
						{
							*nickels = change / 5;
							change -= *nickels * 5;
							*pennies = change / 1;
							change -= *pennies * 1;
						}
					}
					else
					{
							*pennies = change / 1;
							change -= *pennies * 1;
					}
				}
			}
			else
			{
				if((int)change % 5 == 0)
				{
					*nickels = change / 5;
				}
				else
				{
					*nickels = change / 5;
					change -= *nickels * 5;
					*pennies = change / 1;
					change -= *pennies * 1;
				}
			}
		}
	}
	else if((int)change >= 10)
	{
		if((int)change % 10 == 0)
		{
			*dimes = change / 10;
		}
		else
		{
			*dimes = change / 10;
			change -= *dimes * 10;
			if((int)change >= 5)
			{
				if((int)change % 5 == 0)
				{
					*nickels = change / 5;
				}
				else
				{
					*nickels = change / 5;
					change -= *nickels * 5;
					*pennies = change / 1;
					change -= *pennies * 1;
				}
			}
			else
			{
				*pennies = change / 1;
				change -= *pennies * 1;
			}
		}
	}
	else if((int)change >= 5)
	{
		if((int)change % 5 == 0)
		{
			*nickels = change / 5;
		}
		else
		{
			*nickels = change / 5;
			change -= *nickels * 5;
			*pennies = change / 1;
			*pennies = change / 1;
			change -= *pennies * 1;
		}
	}
	else if((int)change >= 1)
	{
		*pennies = change / 1;
		change -= *pennies * 1;
	}
}

int main()
{
	float moneyGiven, cost;
	int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
	printf("Enter a cost and then the amount of money given. The program will\n"
			"figure out the change and the number of quarters, dimes, nickels, pennies\n"
			"needed for the change.\n");
	printf("Cost: $");
	scanf("%f", &cost);
	printf("Money Given: $");
	scanf("%f", &moneyGiven);
	//printf("Change: $%.2f", moneyGiven - cost);

	double change = moneyGiven - cost;
	double integral;
	double decpart = round(modf(change, &integral) *100.0);
	getChange(decpart, &quarters, &dimes, &nickels, &pennies);
	printf("Change: $%.2f\n%d Quarters, %d Dimes, %d Nickels, %d Pennies", change, quarters, dimes, nickels, pennies);

	return 0;
}
