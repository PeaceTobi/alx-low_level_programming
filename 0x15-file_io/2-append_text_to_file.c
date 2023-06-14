#include "main.h"

/**
 * append_text_to_file - This function adds text at EOF
 * @filename: name of the file to append data to.
 * @text_content: data to append to file
 * Return: 1 if succesfull else -1 on err
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int nrd = 0, nwr = 0, i = 0;

	if (!filename)
		return (-1);

	nrd = open(filename, O_WRONLY | O_APPEND);
	if (nrd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		nwr = write(nrd, text_content, i);
		if (nwr < 0)
		return (-1);
	}
	close(nrd);
	return (1);
}

