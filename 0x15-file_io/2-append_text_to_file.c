#include "holberton.h"
/**
* append_text_to_file - appens text at the end of a file
* @filename: the file to append to
* @text_content: the text that will be appended to the file
* Return: 1 (Success), -1 (Failure)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	while (text_content[i])
		i++;
	len = write(fd, text_content, i);
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
