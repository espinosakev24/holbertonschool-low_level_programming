#include <stdio.h>
int main(void){
  char *s="hello world\n";
  while (*s) putchar(*s++);
}
