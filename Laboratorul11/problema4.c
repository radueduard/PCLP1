//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>
#define BUFMAX 4
#define BUFINPUTLINE 1005
int main(int argc, char **argv)
{
    char linie_tabela[BUFMAX];
    char linie_input[BUFINPUTLINE];
    for(int i = 0; i < BUFINPUTLINE; i++)
        linie_input[i] = '\0';
    FILE *tabela, *input, *output;
    tabela = fopen(argv[1], "r");
    input = fopen(argv[2], "r");
    output = fopen(argv[3], "w");
    char tabel[15][2];

    int k = 0;
    while(fgets(linie_tabela, BUFMAX, tabela) != NULL)
    {
        tabel[k][0] = linie_tabela[0];
        tabel[k][1] = linie_tabela[2];
        k++;
    }
    while(fgets(linie_input, BUFINPUTLINE, input) != NULL)
    {
        linie_input[strlen(linie_input) - 1] = '\0';
        for (int i = 0; i < strlen(linie_input); i++)
        {
            int ok = 0;
            for (int j = 0; j < 15; j++)
            {
                if (linie_input[i] == tabel[j][0] || linie_input[i] == tabel[j][0] - 32)
                {
                    if (linie_input[i] == tabel[j][0])
                        fputc(tabel[j][1], output);
                    else
                        fputc(tabel[j][1] - 32, output);
                    ok = 1;
                    break;
                }
            }
            if (ok == 0)
            {
                fputc(linie_input[i], output);
            }
        }
        fputc('\n', output);
        for (int i = 0; i < BUFINPUTLINE; i++)
            linie_input[i] = '\0';
    }

    fclose(input);
    fclose(output);
    fclose(tabela);
    return 0;
}