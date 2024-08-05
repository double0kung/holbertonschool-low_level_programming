#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Print error message and exit with specified code
 * @code: Exit code
 * @message: Error message format string
 * @arg: Argument for error message (string or int)
 */
void error_exit(int code, const char *message, void *arg)
{
	if (code == 100)
		dprintf(STDERR_FILENO, message, *(int *)arg);
	else
		dprintf(STDERR_FILENO, message, (char *)arg);
	exit(code);
}

/**
 * main - Copy content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd = 1, wr;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	while (rd > 0)
	{
		rd = read(fd_from, buffer, BUFFER_SIZE);
		if (rd == -1)
		{
			close(fd_from);
			close(fd_to);
			error_exit(98, "Error: Can't read from file %s\n", argv[1]);
		}
		if (rd > 0)
		{
			wr = write(fd_to, buffer, rd);
			if (wr == -1 || wr != rd)
			{
				close(fd_from);
				close(fd_to);
				error_exit(99, "Error: Can't write to %s\n", argv[2]);
			}
		}
	}
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", &fd_from);
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", &fd_to);
	return (0);
}
