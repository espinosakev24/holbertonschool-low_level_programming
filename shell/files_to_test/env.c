#include<stdio.h>

extern char **environ;

char *path(const char **environ) {
  int i = 1;
  char *s = *environ;

  for (; s; i++) {
    printf("%s\n", s);
    s = *(environ+i);
  }

  return 0;
}

