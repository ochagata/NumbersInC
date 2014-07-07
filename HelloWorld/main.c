#include <stdio.h>
#include <math.h>

int main()
{
	int input;
	printf("Enter a number between 0 and 20 and the program "
			"will generate PI up to that many decimal places: ");
	scanf("%d", &input);
	char str[2];
	sprintf(str, "%d", input);
	char output[30];
	*output = "%.";
	strcat(output, str);
	strcat(output, "f");
	printf("%s",output);
	return 0;
}


//sernatin
//skunkworks1
