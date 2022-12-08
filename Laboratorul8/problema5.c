#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificare(char ah, char bh)
{
    if(ah <= 'Z'){
        if (ah == bh || ah == bh - 32) return 1;
        else return 0;
    }

    if(ah >= 'a'){
        if(ah == bh || ah == bh + 32) return 1;
        else return 0;
    }
    return 0;
}

int main() {

    int n, dim;
    char ch, ultimul, penultimul, * string, primul, al_doilea, last_word[30];
    scanf("%d\n", &n);
    scanf("%c", &penultimul);
    scanf("%c", &ultimul);
    scanf("%c", &ch);
    string = (char *) malloc (2 * sizeof(char));
    dim = 2;
    string[0] = penultimul;
    string[1] = ultimul;
    int k = 1;
    while(ch != ' ')
    {
        realloc(string, (++dim) * sizeof(char));
        string[++k] = ch;
        ultimul = string[k];
        penultimul = string[k - 1];
        scanf("%c", &ch);
    }

    realloc(string, (++dim) * sizeof(char));
    string[++k] = '-';

    do
    {
        scanf("%c", &primul);
        scanf("%c", &al_doilea);

        if(verificare(primul, penultimul) == 1 && verificare(al_doilea, ultimul) == 1){
            realloc(string, (dim + 2) * sizeof(char));
            dim = dim + 2;
            string[++k] = primul;
            string[++k] = al_doilea;
            penultimul = primul;
            ultimul = al_doilea;
            do{
                scanf("%c", &ch);
                if(ch != ' '){
                    realloc(string, (++dim) * sizeof(char));
                    string[++k] = ch;
                    penultimul = ultimul;
                    ultimul = ch;
                }
            } while (ch != ' ');

            realloc(string, (++dim) * sizeof(char));
            string[++k] = '-';
        }
        else
        {
            do{
                scanf("%c", &ch);
            } while (ch != ' ');
        }
        n --;
    } while (n >= 3);
    realloc(string, (++dim) * sizeof(char));
    string[++k] = '\0';

    scanf("%s", last_word);
    primul = last_word[0];
    al_doilea = last_word[1];
    if(verificare(primul, penultimul) == 1 && verificare(al_doilea, ultimul) == 1)
    {
        realloc(string, (dim + 1 + strlen(last_word)) * sizeof(char));
        strcat(string, last_word);
        string[strlen(string)] = '\0';
        printf("%s\n", string);
        free(string);
    }
    else
    {
        string[strlen(string) - 1] = '\0';
        printf("%s\n", string);
        free(string);
    }
    return 0;
}