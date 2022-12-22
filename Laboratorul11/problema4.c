#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char tabel[4];
    char input[1005];
	char tabel2[15][2];

	int i, j = 0;
    for(i = 0; i < 1005; i++)
	{
        input[i] = '\0';
	}
    FILE *fisier1, *fisier2, *fisier3;
	
    fisier1 = fopen(argv[1], "r");
    fisier2 = fopen(argv[2], "r");
    fisier3 = fopen(argv[3], "w");

    while(fgets(tabel, 4, fisier1) != NULL)
    {
        tabel2[j][0] = tabel[0];
        tabel2[j][1] = tabel[2];
        j++;
    }
    while(fgets(input, 1005, fisier2) != NULL)
    {
        input[strlen(input) - 1] = '\0';
        for (int i = 0; i < strlen(input); i++)
        {
            int counter = 0;
            for (int j = 0; j < 15; j++)
            {
                if (input[i] == tabel2[j][0] || input[i] == tabel2[j][0] - 32)
                {
                    if (input[i] == tabel2[j][0])
					{
                        fputc(tabel2[j][1], fisier3);
					}
                    else
					{
                        fputc(tabel2[j][1] - 32, fisier3);
					}
                    counter = 1;
                    break;
                }
            }
            if (counter == 0)
            {
                fputc(input[i], fisier3);
            }
        }
		
        fputc('\n', fisier3);
        for (int i = 0; i < 1005; i++)
		{
            input[i] = '\0';
		}
    }

    fclose(fisier2);  fclose(fisier3); fclose(fisier1);
    return 0;
}
