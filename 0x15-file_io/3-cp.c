#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *buffer_create(char *file);
void closefile(int file);

/**
 * buffer_create - creates a buffer for 1024 bytes
 * @file: name of the file
 *
 * Return: newly allocated buffer
 */

char *buffer_create(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * closefile - closes files
 * @file: file to be closed
 */

void closefile(int file)
{
	int i;

	i = close(file);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - Copies content from one file to another
 * @argc: number of arguments
 * @argv: Array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, wr, r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = buffer_create(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, r);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	closefile(from);
	closefile(to);

	return (0);
}
