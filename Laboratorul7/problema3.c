#include <stdio.h>
#include <string.h>
char* strdel(char* p, int n) {
    for (int i = 0;i < n;i++)
        strcpy(p, p + 1);
}
char* strins(char* p, char* s) {
    char* k = p;
    strcpy(p, s);
    strcat(p, k);
}


int main()
{
    char s1[3000], s2[20], s3[20];
    fgets(s1, 3000, stdin);
    fgets(s2, 20, stdin);
    fgets(s3, 20, stdin);
    int i;
    for (i = 0;i < strlen(s1) - 1;i++) {
        if (strstr(s1, s2)) {
            char* aux;
            strcpy(aux, s1 + i + strlen(s2));
            strdel(s1 + i, strlen(s2));
            strins(aux, s3);
            strcat(s1 + i, aux);
        }


    }
    printf("%s \n", s1);
    return 0;
}
