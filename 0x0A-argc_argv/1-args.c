#include "main.h"
#include <stdio.h>

/**
* main - Prints the number of arguments passed into it
* @argc: argument count
* @argv: argument vector
* Return: int
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		printf("%d\n", argc - 1);
	}

	return 0;
}
