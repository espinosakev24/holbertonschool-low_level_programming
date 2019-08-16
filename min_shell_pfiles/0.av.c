#include <stdio.h>
int main(__attribute__((unused)) int argc, char *argv[])
{
	int n = 0;

	while (argv[n] != 0)
	{
		printf("%s \n", argv[n]);
		n++;
	}
}
