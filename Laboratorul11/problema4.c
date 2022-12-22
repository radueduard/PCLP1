//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define BUFMAX 1005
int main(int argc, char* argv[])
{
    FILE *tabela, *in, *out;
    char buffer[BUFMAX],buf[BUFMAX];
    in = fopen(argv[2], "r");
    if (in == 0)
    {
        printf("Nu s-a putut deschide.");
        exit(1);
    }
    out = fopen(argv[3], "w");
    if (out == 0)
    {
        printf("Nu s-a putut deschide.");
        exit(1);
    }
	while (fgets(buffer, BUFMAX, in) != NULL)
    {
        for (int i = 0; i < strlen(buffer); i++)
        {
			int mergi_pana_gasesti=0;
			tabela = fopen(argv[1], "r");
			if (tabela == 0)
             {
               printf("Nu s-a putut deschide.");
               return 0;
             }
			 fgets(buf,BUFMAX,tabela);
			 fgets(buf,BUFMAX,tabela);
			 while(fgets(buf,BUFMAX,tabela)!=NULL && buf[0]!=buffer[i] && buf[0]!=buffer[i]+32 && buf[0]!=buffer[i]-32)
			 mergi_pana_gasesti++;
			 if(buffer[i]==buf[0])
			 buffer[i]=buf[2];
			 if(buffer[i]-32==buf[0])
			 buffer[i]=buf[2]+32;
			 if(buffer[i]+32==buf[0])
			 buffer[i]=buf[2]-32;
		}
		fprintf(out,"%s",buffer);
	}
	fclose(in);
	fclose(out);
}