#include <stdio.h>
#include <stdlib.h>


/*int main()
{
	char *string;
	char *buffer;
	size_t size = 32;

	buffer = malloc((sizeof(char)) * size);
	if (buffer == NULL)
		exit(1);

	printf("$");
	getline(&buffer, &size, stdin);
	printf("%s", buffer);
	return(0);
}*/
int main()
{
	while (stdin != EOF)
	{
		printf("$");
	}
	return (0);
}
