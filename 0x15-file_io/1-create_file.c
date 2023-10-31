#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - This function create a file
 * @filename: name of that file
 * @text_content: content to add
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int iterator = 0, write_myfile;
	int filet = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filet == -1)
	{
	return (-1);
	}
	if (text_content == NULL)
	{
	text_content = " ";
	}
	while (text_content[iterator] != '\0')
	{
	iterator++;
	}
        write_myfile = write(filet, text_content, iterator);
	if (write_myfile == -1)
	{
	return (-1);
	}
	close(filet);
	return (1);
}
