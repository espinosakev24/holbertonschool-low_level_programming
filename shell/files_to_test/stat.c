#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * main - stat example
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	struct stat st;

	if (ac != 2)
	{
		printf("Invalid input\n");
		return (1);
	}

	if ((stat(av[1], &st)) == 0)
		printf("%s Was found!\n", av[1]);

	else
	{
		printf("%s Wasn't found :/\n", av[1]);
		return (1);
	}

	return (0);

}
