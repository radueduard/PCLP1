#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, cap = 101;
    scanf("%d", &n);
    gets();
    char *s = malloc(cap * sizeof(char));
    char *s2;
    scanf("%s", s);
    for (int i = 1; i < n; i++)
    {
        scanf("%s", s2);
        if (((s[strlen(s) - 1] - s2[1] == 0) || (abs(s[strlen(s) - 1] - s2[1]) == 32)) && ((s[strlen(s) - 2] - s2[0] == 0) || (abs(s[strlen(s) - 2] - s2[0]) == 32)))
        {
            strcat(s, "-");
            strcat(s, s2);
        }
        s = realloc(s, 2 * strlen(s) * sizeof(char));
    }
    printf("%s", s);
    free(s);

    return 0;
}