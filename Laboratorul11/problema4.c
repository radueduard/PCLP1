#include <stdio.h>
#include <string.h>
#define BUFMAX 1005

int main(int argc, char *argv[])
{
	FILE *original, *cod, *modificat;
	char buffer[BUFMAX];
	char c[128], c_org, c_mod;
	int i;

	original = fopen(argv[2], "r");
	cod = fopen(argv[1], "r");
	modificat = fopen(argv[3], "w");

	for (i = 0; i < 128; i++)
		c[i] = i;
	while (fgets(buffer, BUFMAX, cod) != NULL)
	{
		if (sscanf(buffer, "%c %c", &c_org, &c_mod) == 2)
			c[c_org] = c_mod;
	}
	while (fgets(buffer, BUFMAX, original) != NULL)
	{
		for (i = 0; i < strlen(buffer); i++)
			fprintf(modificat, "%c", c[buffer[i]]);
	}
	fclose(original);
	fclose(cod);
	fclose(modificat);
	return 0;
}