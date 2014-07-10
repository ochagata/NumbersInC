#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>



int main()
{
	char c;
	printf("Converter to convert a decimal number to binary "
			"or a binary number to its decimal equivalent.\n"
			"\nEnter 'b' to convert binary to decimal\n"
			"Or enter 'd' to convert decimal to binary\n");
	scanf("%c", &c);
	int input;
	char output[32];
	switch (c){
		case 'd':
			printf("Enter decimal number to be converted to binary: ");
			int input;
			scanf("%d", &input);
			while(input > 0)
			{
				if(input % 2 == 0)
				{
					strcat(output, "0");
					input /= 2;
				}
				else
				{
					strcat(output, "1");
					input /= 2;
				}
			}
			printf("Result: ");
			int i;
			for(i = strlen(output); i >= 1; i--)
			{
				printf("%c", output[i]);
			}
			break;
		case 'b':
			printf("Enter binary number to be converted to decimal: ");
			char inputB[32];
			scanf("%s", inputB);
			int output = 0;
			int flag = 0;
			int j;
			for(j = 0; j < strlen(inputB); j++)
			{
				if(inputB[j] == '1' || inputB[j] == '0')
				{
					output = (output * 2) + (inputB[j] - '0');
				}
				else
				{
					printf("Invalid input!\n");
					flag = 1;
					break;
				}
			}
			if(flag == 0)
			{
				printf("Result: %d", output);
			}
			break;
	}
	return 0;
}
