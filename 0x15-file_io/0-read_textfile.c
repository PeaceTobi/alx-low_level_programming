#include "main.h"
/**
 * read_textfile - function that reads a textfile and prints
 * the content to POSIX STDOUT
 * @filename: The name of the file to read from
 * @letters: The number of characters it should print to the STDOUT
 * Return: Returns the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nrd = 0, nwr = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	nrd = open(filename, O_RDONLY);
	if (nrd < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nwr = read(nrd, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nwr);
	if (nwr < 0)
		return (0);

	close(nrd);
	free(buffer);
	return (nwr);
}

