//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>
#define BUFMAX 1005

int main(int argc, char** argv) {

    FILE * my_file;
    char buffer[BUFMAX];
    my_file = fopen(argv[1], "r");

    while(fgets(buffer, BUFMAX, my_file) != NULL)
    {
        if(strstr(buffer, argv[2])) {
            printf("%s", buffer);
        }
    }

    fclose(my_file);
    return 0;
}