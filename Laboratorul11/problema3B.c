//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define BUFMAX 1005

int i_arg(char* buffer, char* my_string)
{
    for(int i = 0; i < strlen(buffer); i++)
        buffer[i] = tolower(buffer[i]);
    for(int i = 0; i < strlen(my_string); i++)
        my_string[i] = tolower(my_string[i]);
    if(strstr(buffer, my_string)) return 1;
    return 0;
}

int main(int argc, char** argv) {

    FILE* my_file;
    char buffer[BUFMAX];
    for(int i = 0; i < BUFMAX; i++)
        buffer[i] = '\0';
    int* option = calloc (3, sizeof (int));
    for(int i = 1; i <= argc - 2; i++)
        if(strcmp(argv[i],"c") == 0)
            option[0] = 1;
        else if(strcmp(argv[i],"i") == 0)
            option[1] = 1;
        else if(strcmp(argv[i],"n") == 0)
            option[2] = 1;

    my_file = fopen(argv[argc - 1], "r");
    int nr_linii = 0;
    int count_linii_acceptate = 0;

    while(fgets(buffer, BUFMAX, my_file) != NULL)
    {
        buffer[strlen(buffer) - 1] = '\0';
        nr_linii++;
        if(option[1] == 1)
        {
            if(i_arg(buffer, argv[argc]))
            {
                count_linii_acceptate++;
                if(option[0]) printf("[%d] %s\n", nr_linii, buffer);
                else printf("%s\n", buffer);
            }
        }
        else
        {
            if (strstr(buffer, argv[argc]))
            {
                count_linii_acceptate++;
                if(option[0]) printf("[%d] %s\n", nr_linii, buffer);
                else printf("%s\n", buffer);
            }
        }
        for(int i = 0; i < BUFMAX; i++)
            buffer[i] = '\0';
    }
    if(option[2])
        printf("Numar total de linii: %d\n", count_linii_acceptate);
    free(option);
    fclose(my_file);
    return 0;
}