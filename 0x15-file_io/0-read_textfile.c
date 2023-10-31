#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - To read text file
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t onmyfiles;
	ssize_t onmy_read, onmy_write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	onmyfiles = open(filename, O_RDONLY);

	if (onmyfiles == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	onmy_read = read(onmyfiles, buffer, letters);
	onmy_write = write(STDOUT_FILENO, buffer, onmy_read);
	close(onmyfiles);
	free(buffer);
	return (onmy_write);
}
