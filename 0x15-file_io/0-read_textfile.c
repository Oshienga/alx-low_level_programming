#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Entry point
 * Description: 'program.'
 * @filename: argument
 * @letters: argument
 * Return: result
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}
	FILE *file;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytes_read = fread(buffer, 1, letters, file);
	if (bytes_read == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);

	return (bytes_written);
}
