#include "main.h"
#include <unistd.h>
/**
 * _putchar - a function that write the char
 * @c: printed char
 * Return: 1 on success and -1 if there's an error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
