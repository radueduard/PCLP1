//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include<string.h>
#define BUFMAX 1005
int main(int argc, char **argv) 
{
	FILE* pFile;
	char buffer[BUFMAX];
	pFile = fopen(argv[1], "r");
	if (pFile == NULL)
		printf("Nu s-a putut deschide fisierul");
		while (fgets(buffer, BUFMAX, pFile) != NULL)
	 {
		if(strstr(buffer,argv[2])!=0)
		printf("%s",buffer);
	}
	fclose(pFile);
}