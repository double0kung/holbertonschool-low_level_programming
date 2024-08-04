#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - prints error message and exits
 * @code: exit code
 * @format: error message format
 * @arg: argument for the error message
 */
void error_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * close_file - closes a file descriptor and handles errors
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
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
		close_file(fd_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			close_file(fd_from);
			close_file(fd_to);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (rd == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
