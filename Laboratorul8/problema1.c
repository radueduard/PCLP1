#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_replace(char *s, char *s1, char *s2)
{
    char *alocare = malloc(101 * sizeof(char)), *sir;
    int lungime = strlen(s1);

    strncat(alocare, s, sir - s);
    strcat(alocare, s2);
    strcat(alocare, sir + lungime);
    strcpy(s, alocare);
    strcpy(alocare, "");
}
int main()
{
    char s1[101], s2[101], s3[101];

    scanf("%s", s2);
    scanf("%s", s3);
    fgets(s1, 101, stdin);

    s1[strlen(s1) - 1] = 0;
    while (strstr(s1, s2))
    {
        my_replace(s1, s2, s3);
    }
    printf("%s", s1);
    
    return 0;
}