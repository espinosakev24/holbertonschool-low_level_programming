#include <stdio.h>
#include <stdlib.h>


int main()
{
	char *buffer;
	size_t size = 32;

	buffer = malloc((sizeof(char)) * size);
	if (buffer == NULL)
		exit(1);

	
	printf("$ ");
	while ((getline(&buffer, &size, stdin)) != EOF)
	{
		printf("$ ");
	}
	return(0);
}
