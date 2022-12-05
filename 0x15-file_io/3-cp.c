#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - copy content of source file to destination file
 * @ac: source file
 * @av: destination file
 * Return: 1 on success
 */

int main(int ac, char **av)
{
	int fd, fdd;
	char *buffer;

	char *file_from = av[1];
	char *file_to = av[2];

	if (ac != 3)
	{
		printf("Error: not enough arguments\n");
		exit(97);
	}
	if (!file_from || !file_to)
	{
		printf("Usage: cp file_from file to\n");
		exit(97);
	}

	if (file_from == NULL || access(file_from, F_OK) == 0)
	{
		printf("Error: Can't read from  %s\n", file_from);
		exit(98);
	}

	fdd = open(file_from, O_WRONLY);
	if (fdd == -1)
		exit(98);

	if (access(file_to, F_OK) == 0)
	{
		fd = open(file_to, O_WRONLY);
	}
	else
		fd = open(file_to, O_CREAT | O_WRONLY, 0664);
	if (fd == -1)
	{
		printf("Error: Can't write to %s\n", file_to);
		exit(99);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (0);

	read(fdd, buffer, 1023);
	while (buffer[1023] != EOF)
	{
		write(fd, buffer, 1023);
		free(buffer);
		read(fdd, buffer, 1023);
	}
	close(fd);
	close(fdd);
	return (1);
}
