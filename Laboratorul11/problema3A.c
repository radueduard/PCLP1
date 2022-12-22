#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char **argv) {
	FILE *citire = fopen("/mnt/c/Users/Adelin/CLionProjects/PCLP1/Laboratorul11/input.txt", "r");
    char *s;
    s = (char *) malloc(200);
    while(fgets(s, 100, citire))
    {
        if(strstr(s, argv[argc - 1]))
        {
            printf("%s\n", s);
        }
    }
	return 0;
}