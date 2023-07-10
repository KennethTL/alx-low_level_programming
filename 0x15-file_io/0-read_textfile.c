#include "main.h"

/**
* read_textfile - Entry point
* Description - A function that reads a text file
* and prints it to the POSIX standard output
* *@filename: the function accepts an input saved into filename
* *@letters: letters is the number of letters it should read and print
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int toOpen, toRead, toWrite;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	/* Opening of the file */
	toOpen = open(filename, O_RDONLY);

	/* Reading the opened file */
	toRead = read(toOpen, buf, letters);

	/* Writing the already read file */
	toWrite = write(STDOUT_FILENO, buf, toRead);

	/* To check if there is an error of some sort */
	if (toOpen == -1 || toRead == -1 || toWrite == -1 || toWrite != toRead)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(toOpen);

	return (toWrite);
}
