#include "main.h"
/**
 * read_textfile - Reads a file and prints it to POSIX stdout
 * @filename: name of file to be read
 * @letters: number of letters the function should print
 * Return: actual number of letters it can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd;
	int w;
	int reading;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	rd = open(filename, O_RDONLY);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}

	reading = read(rd, buf, letters);
	if (reading == -1)
	{
		close(rd);
		free(buf);
		return (0);
	}

	for (w = 0; w < reading; w++)
	{
		if (write(STDOUT_FILENO, &buf[w], 1) == -1)
		{
			close(rd);
			free(buf);
			return (0);
		}

	}
	close(rd);
	free(buf);
	return (reading);
}
