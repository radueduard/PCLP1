#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char *argv[]) {
    FILE *citire,*scriere,*codificarea;
    char c,c1,c2;
    int ok;
    if(argc!=4){
        printf("Nu au fost furnizate toate fisierele\n");
        return 0;
    }
    if (citire == NULL)
    {
        printf("Eroare la deschiderea fisierului tabela_de_codare.in");
        return 0;
    }
    if (codificarea == NULL)
    {
        printf("Eroare la deschiderea fisierului de codificat!");
        return 0;
    }
    if (scriere == NULL)
    {
        printf("Eroare la deschiderea fisierului de scriere!");
        return 0;
    }
    citire= fopen(argv[1],"r");
    codificarea= fopen(argv[2],"r");
    scriere= fopen(argv[3],"w");
    while((c = fgetc(citire)) != EOF){
        ok=0;
        //printf("%c",c);
        rewind(codificarea);
        while((c1=fgetc(codificarea))!=EOF&&(c2=fgetc(codificarea))!=EOF&&ok==0){
            //printf("%c %c\n",c1,c2);
            if(c==c1){
                fputc(c2,scriere);
                printf("%c",c2);
                ok=1;
            }
        }
    }
    fclose(citire);
    fclose(codificarea);
    fclose(scriere);
    return 0;
}
