#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
    char s[100], codificari[100][3], aux[5];
    int nr_codi = 0, gasit, i, j;
    FILE *citire = fopen("/mnt/c/Users/Adelin/CLionProjects/PCLP1/Laboratorul11/input.txt", "r");
    FILE *scriere = fopen("/mnt/c/Users/Adelin/CLionProjects/PCLP1/Laboratorul11/output.txt", "w");
    FILE *(citire_codi) = fopen("/mnt/c/Users/Adelin/CLionProjects/PCLP1/Laboratorul11/tabela_de_codare.in", "r");
    while(fgets(aux,4,citire_codi)) {
        nr_codi++;
        strcpy(codificari[nr_codi], aux);
    }
    while(fgets(s,100,citire))
    {    i = 0;
         while(i < strlen(s))
         {   gasit = 0;
             for(j = 1; j <= nr_codi && gasit == 0; j++)
             {
                 if(s[i] == codificari[j][0] || s[i] == codificari[j][0] - 32 || s[i] == codificari[j][0] + 32 )
                 {
                     gasit = 1;
                 }
             }
             if(gasit == 1)
             {
                 s[i] = codificari[j][2];
             }
             i++;
         }
         fprintf(scriere,"%s", s);
    }
    fclose(citire);
    fclose(scriere);
	return 0;
}