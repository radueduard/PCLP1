#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    char s[20];
    scanf("%d\n", &n);
    char ** matrix = (char **) malloc (n * sizeof(char *));
    int aparitii[1000];
    for(int i = 0; i < n; i++)
    {
        matrix[i] = (char *) malloc (20 * sizeof (char));
    }
    int i = 0;
    do {
        scanf("%s", s);
        int j;
        for(j = 0; j < strlen(s); j++)
            matrix[i][j] = s[j];
        matrix[i][j] = '\0';
        i++;
    } while (i < n);

    int * v = (int *) calloc (n, sizeof(int));
    int z = -1;
    int q = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == 0)
        {
            int k = 0; z++; q++;
            for (int j = i; j < n; j++)
            {
                if (strcmp(matrix[i], matrix[j]) == 0)
                {
                    aparitii[z] = ++k;
                    v[j] = q;
                }
            }
        }
    }
    q = 1;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == q) printf("%s %d\n", matrix[i], aparitii[q - 1]);
        q ++;
    }
    return 0;
}