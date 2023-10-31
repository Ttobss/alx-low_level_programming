#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
/**
 * append_text_to_file - This append to a file
 * filename: name of that file
 * @text_content: content
 * Return: Return 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filet, d, write_myfile;

	if (filename == NULL)
	{
	return (-1);
	}
	filet = open(filename, O_WRONLY | O_APPEND);
	if (filet == -1)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
	for (d = 0; text_content[d]; d++)
	{
};
	write_myfile = write(filet, text_content, d);
		if (write_myfile == -1)
		{
		return (-1);
		}
	}
	close(filet);
	return (1);
}
