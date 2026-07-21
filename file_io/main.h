#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file(int fd_from, int fd_to, char *file_to);
void close_file(int fd);

#endif /* MAIN_H */
