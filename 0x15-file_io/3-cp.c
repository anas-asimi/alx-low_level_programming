#include "main.h"

/**
 * check_if_97 - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check_if_97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_if_98 - checks that file_from exists and can be read
 * @check: checks if true of false
 * @file: file_from name
 * @f_from: file descriptor of file_from, or -1
 * @f_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check_if_98(ssize_t check, char *file, int f_from, int f_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (f_from != -1)
			close(f_from);
		if (f_to != -1)
			close(f_to);
		exit(98);
	}
}

/**
 * check_if_99 - checks that file_to was created and/or can be written to
 * @check: checks if true of false
 * @file: file_to name
 * @f_from: file descriptor of file_from, or -1
 * @f_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check_if_99(ssize_t check, char *file, int f_from, int f_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (f_from != -1)
			close(f_from);
		if (f_to != -1)
			close(f_to);
		exit(99);
	}
}

/**
 * check_if_100 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void check_if_100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check_if_97(argc);
	f_from = open(argv[1], O_RDONLY);
	check_if_98((ssize_t)f_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check_if_99((ssize_t)f_to, argv[2], f_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(f_from, buffer, 1024);
		check_if_98(lenr, argv[1], f_from, f_to);
		lenw = write(f_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check_if_99(lenw, argv[2], f_from, f_to);
	}
	close_to = close(f_to);
	close_from = close(f_from);
	check_if_100(close_to, f_to);
	check_if_100(close_from, f_from);
	return (0);
}
