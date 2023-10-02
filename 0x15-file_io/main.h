#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_if_97(int argc);
void check_if_98(ssize_t check, char *file, int f_from, int f_to);
void check_if_99(ssize_t check, char *file, int f_from, int f_to);
void check_if_100(int check, int fd);

#endif /*MAIN_H*/
