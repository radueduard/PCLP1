//
// Created by Eduard Andrei Radu on 09.11.2022.
//
#include <stdio.h>
#include <stdlib.h>
void citireCodificare(char *fisier, char *cod) {
    FILE *codificare;
    codificare = fopen(fisier, "r");

    char litere[5];
    while(fgets(litere, 5, codificare) != NULL) {
        cod[litere[0] - 'a'] = litere[2];
    }

    fclose(codificare);
}

void codificare(char *input, char *output, char *cod) {
    FILE *fisierInput, *fisierOutput;
    fisierInput = fopen(input, "r");
    fisierOutput = fopen(output, "w");

    char ch;
    while((ch = fgetc(fisierInput)) != EOF) {
        if(ch >= 'A' && ch <= 'Z') {
            ch = cod[ch + 32 - 'a'] - 32;
        }
        else if(ch >= 'a' && ch <= 'z') {
            ch = cod[ch - 'a'];
        }
        fprintf(fisierOutput, "%c", ch);
    }
    fclose(fisierInput);
    fclose(fisierOutput);
}

int main(int argc, char **argv)
{
    char cod[] = "abcdefghijklmnopqrstuvwxyz";
    citireCodificare(argv[1], cod);
    codificare(argv[2], argv[3], cod);
    return 0;
}
