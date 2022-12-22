
#include <stdio.h>
#include <string.h>
#define MAX 1005

int main(int argc, char** argv) {

    FILE * fisier;
    char auxiliar[MAX];
    fisier = fopen(argv[1], "r");

    while(fgets(auxiliar, MAX, fisier) != NULL)
    {
        if(strstr(auxiliar, argv[2])) 
		{
            printf("%s\n", auxiliar);
        }
    }

    fclose(fisier);
    return 0;
}