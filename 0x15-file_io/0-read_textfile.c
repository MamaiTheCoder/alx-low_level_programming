#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 *
 * @filename: filename
 * @letters: numbers of letters printed
 *
 * Return: number of letters printed
 * 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (0 == -1 || r == -1 || w == -1 || w != r)
	{

		free(buf);
		return (0);
	}
	free(buf);
	close(0);

	return (w);
}
