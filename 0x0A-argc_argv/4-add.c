#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * num_check - checks if the string has digits
 * @str: str is an array
 * Return: always 0 when sucessful
 */

int num_check(char *str)
{
	unsigned int count;/*declaring unknown variable count*/

	while (count < strlen(str))/*counting the string*/
	{
		if (!isdigit(str[count]))/*checking for digits in str*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - prints program name
 * @argv: the arguments
 * @argc: the counted arguments
 * Return: always 0 when sucessful
 */

int main(int argc, char *argv[])
{
	/*declaring all variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)/*searches the whole array*/
	{
		if (num_check(argv[count]))
		{
			str_to_int = atoi(argv[count]);/*conerting string to integer*/
			sum += str_to_int;
		}
		/*condition if string contains a symbol*/

		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
