#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file); void close_file(int fd);

/**
 * create_buffer - allocates bytes
 * @file: name
 * Return:a pointer to new buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{

