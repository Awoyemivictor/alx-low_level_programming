#include "main.h"

/**
 * main - program that prints the number of arguments passed into it
 *
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n" argc - 1);
	
	return 0;
}
