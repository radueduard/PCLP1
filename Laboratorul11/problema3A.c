//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    FILE *fisierInput;
    fisierInput = fopen(argv[1], "r");
    char buffer[100];

    while(fgets(buffer, 100, fisierInput) != NULL) {
        if(strstr(buffer, argv[2]))
            printf("%s", buffer);
    }

    fclose(fisierInput);
	return 0;
}