#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: name of file
 * @letters: number of letters to read
 *
 * Return: number of bytes read and printed or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file, wr, r;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	r = read(file, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(file);
	return (wr);
}
