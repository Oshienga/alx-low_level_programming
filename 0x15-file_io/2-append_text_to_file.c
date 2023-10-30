#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Entry point
 * Description: 'program.'
 * @filename: argument
 * @text_content: argument
 * Return: result
*/

int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	int fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	size_t content_length = strlen(text_content);
	ssize_t bytes_written = write(fd, text_content, content_length);

	if (bytes_written == -1 || (size_t)bytes_written != content_length)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
