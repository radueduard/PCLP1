#include <stdio.h>
#include <string.h>
#define BUFMAX 1005

int main(int argc, char *argv[])
{
	FILE *f;
	char buffer[BUFMAX];
	f = fopen(argv[1], "r");
	if (f == NULL)
	{
		printf("Eroare la deschiderea fisierului!\n");
		return 1;
	}
	while (fgets(buffer, BUFMAX, f) != NULL)
	{
		if (strstr(buffer, argv[2]))
		{
			printf("%s", buffer);
		}
	}
	return 0;
}