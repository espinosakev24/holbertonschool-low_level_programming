#ifndef HOLBERTON
#define HOLBERTON
char *_strcat(char *dest, char *src);
extern char **environ;
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void print_env(void);
int _strcmp(char *s1, char *s2);
char **get_env(char *PATH, char *ss[500]);
#endif
