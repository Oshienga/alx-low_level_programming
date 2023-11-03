#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Entry point
 * Description: 'program.'
 * @filename: argument
 * @letters: argument
 * Return: result
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	char buffer[letters];

	bytesRead = read(fd, buffer, letters);

	if (bytesRead <= 0)
	{
		close(fd);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWritten != bytesRead)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytesWritten);
}
