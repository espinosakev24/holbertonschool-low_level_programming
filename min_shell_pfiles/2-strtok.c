#include <string.h>
#include <stdio.h>

*_strtok(const char *str, char argv[])
{
	char str;

	str = strtok(argv[1], argv[2]);
	return(str);
}
int main(int argc, char *argv[])
{
	_strtok(argv[1], argv[2]);
	printf("%s", str);
	return (0);
}
