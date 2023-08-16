#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-cal-h"
/**
 * main - prints the result of simple operations.
 * @argc: The number of arguments supplied to the program
 * @argv: an array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int (*get_op_func(char *s))(int, int)
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}