#include <stdio.h>
#include <string.h>

int allsmall(char *sir) {
    for (int i = 0; i < strlen(sir); ++i)
        if(sir[i] < 'a' || sir[i] > 'z')
            return 0;
    return 1;
}

char *next(char *from, char *word) {
    int ok = 0;
    word = strtok(from, " ,.!\"';");
    if(allsmall(word))
        return from;
    while(word = strtok(NULL, " ,.!\"';")){
        if(allsmall(word)){
            return from;
            break;
        }
    }
    return from;
}

int main()
{
    char s[101], cuv[101];
    fgets(s, 101, stdin);
    s[strlen(s) - 1] = 0;

    next(s, cuv);
    while(s) {
        printf("%s ", cuv);
        next(s, cuv);
    }
    return 0;
}