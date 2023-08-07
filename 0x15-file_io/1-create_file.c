#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of file
 * @text_content: string to write to the file
 *
 * Return: 1 or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, wr, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(file, text_content, i);

	if (file == -1 || wr == -1)
		return (-1);

	close(file);

	return (1);
}

