#include "main.h"
/**
 * create_file - function that creates a file and adds permission to it
 * @filename: The name of the file to be created
 * @text_content: content to be placed in the created file
 * Return: 1 if successfull and -1 on err.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t nrd = 0, nwr = 0, i = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	nrd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (nrd < 0)
		return (-1);

	while (text_content[i])
		i++;
	nwr = write(nrd, text_content, i);
	if (nwr < 0)
		return (-1);

	close(nrd);
	return (1);
}

