#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int buff_size = 0;
	char *buffer;
	size_t size = 32;

	buffer = malloc((sizeof(char)) * size);
	if (buffer == NULL)
		exit(1);

	char *argv[2];

	printf("$ ");
	while ((getline(&buffer, &size, stdin)) != EOF)
	{
		buff_size = strlen(buffer);
		buffer[buff_size - 1] = '\0';
		printf("$ ");
		argv[0] = buffer, argv[1] = NULL;
		if (execve(argv[0], argv, NULL) == -1)
			perror("Error");
	}
	return(0);
}
