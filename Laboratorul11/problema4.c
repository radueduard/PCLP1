//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>
#define BUFMAX 1005

int main(int argc, char** argv)
{	char s[52];
	FILE* pFile;
	FILE* pFile2;
	FILE* pFile3;
	char buffer[BUFMAX];
	for(int i=0;i<52;i++)
		s[i]='*';
	pFile = fopen("tabela_de_codare.in", "r");
	if (pFile == NULL)
		printf("Nu s-a putut deschide fisierul");
	pFile2 = fopen("input.txt", "r");
	if (pFile2 == NULL)
		printf("Nu s-a putut deschide fisierul");
	pFile3 = fopen("output.txt", "w");
	if (pFile3 == NULL)
		printf("Nu s-a putut deschide fisierul");

	while (fgets(buffer, BUFMAX, pFile) != NULL) {
		if(buffer[0]>='A'&&buffer[0]<='Z'){
			s[buffer[0]-65]=buffer[2];
			s[buffer[0]-65+26]=buffer[2]+32;
		}
		if(buffer[0]>='a'&&buffer[0]<='z'){
			s[buffer[0]-71]=buffer[2];
			s[buffer[0]-71-26]=buffer[2]-32;
		}
	}
	while (fgets(buffer, BUFMAX, pFile2) != NULL) {
			for(int i=0;i<strlen(buffer);i++){
				if(buffer[i]>='A'&&buffer[i]<='Z')
						if(s[buffer[i]-65]!='*')
							buffer[i]=s[buffer[i]-65];
			if(buffer[i]>='a'&&buffer[i]<='z')
						if(s[buffer[i]-71]!='*')
							buffer[i]=s[buffer[i]-71];
			}
		fputs(buffer,pFile3);
	}
	fclose(pFile);
	fclose(pFile2);
	fclose(pFile3);
}