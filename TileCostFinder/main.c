#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

float calculateTotal (float h, float w, float c)
{
	return h * w * c;
}

int main()
{
	float width, height, cost, total;
	printf("The program will Calculate the total cost of tile it would take to"
			" cover a floor plan\nof width and height, using a cost "
			"entered by you, the user.\n");

	printf("Enter the width: ");
	scanf("%f", &width);
	printf("Enter the height: ");
	scanf("%f", &height);
	printf("Enter the cost: ");
	scanf("%f", &cost);

	total = calculateTotal(height, width, cost);

	printf("The total cost of the purchase is: $%.2f", total);
	return 0;
}
