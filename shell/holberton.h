#ifndef HOLBERTON
#define HOLBERTON
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include "holberton.h"
char *getline_tty(char *buffer);
char *check_path(char **paths, char *command, char **tokens);
char *_strcat(char *dest, char *src);
extern char **environ;
int _strlen(char *s);
char *_strstr(char *haystack, char *needle);
void print_env(void);
int _strcmp(char *s1, char *s2);
char **get_env(char *PATH);
#endif
