#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * my_replace(char * s, char * s1, char *s2){

    char * p1, * new_string;
    new_string = (char *) malloc ((strlen(s) - strlen(s1) + strlen(s2) + 1) * sizeof(char));
    int q = -1;
    for(p1 = s;  * (p1 + strlen(s1) - 1) != '\0'; p1++)
    {
        if (*p1 == *s1)
        {
            int k = 0;
            while( *(p1 + k) == *(s1 + k) && k <= strlen(s1))
            {
                k++;
            }
            if(k == strlen(s1))
            {
                for (int i = 1; i <= strlen(s2); i++)
                    new_string[q + i] = *(s2 + i - 1);
                q = q + strlen(s2);
                for(char * p3 = p1 + strlen(s1); * p3 != '\0'; p3++)
                {
                    new_string[++ q] = * p3;
                }
                *(p1 + strlen(s1)) = '\0';
            }
            else
            {
                for(int i = 0; i <= k; i++)
                    new_string[++ q] = *(p1 + i);
                p1 = p1 + k;
            }
        }
        else new_string[++ q] = *p1;
    }
    new_string[++ q] = '\0';
    strcpy(s, new_string);

}
int main ()
{
    char s[100], s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s\n", s2);
    scanf("%[^\n]", s);

    printf("%s\n", my_replace(s, s1, s2));
    return 0;
}