//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    FILE *f;
    f = fopen("input.txt", "r");
    char cuvant[20], linie[100];
    strcpy(cuvant, argv[2]);
    while(fgets(linie, sizeof(linie), f) != NULL)
    {
        if(strstr(linie, cuvant) != NULL)
            printf("%s", linie);
    }
	return 0;
}