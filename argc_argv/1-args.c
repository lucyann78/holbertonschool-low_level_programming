#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: number of arguments as an integer
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
