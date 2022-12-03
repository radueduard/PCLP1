#include <stdio.h>
#include <stdlib.h>

char *my_replace(char *s, char *s1, char *s2) {
    char *sn;
    int i = 0;
    int copyPozSn = 0;
    sn = (char *)malloc(30);
    while (s[i] != 0) {  // sfarsit
        int j = 0;
        int cont = 0;
        int copy_i = i;
        while (s[i] != 32 && s[i] != 0) {  // spatiu
            if (s[i] == s1[j] && s1[j] != 0) {
                cont++;
            }
            j++;
            i++;
        }
        int m = 0;
        if (cont == j) {
            while (s2[m] != 0) {
                sn[copyPozSn] = s2[m];
                m++;
                copyPozSn++;
            }
        } else {
            while (s[copy_i] != 32 && s[copy_i] != 0) {
                sn[copyPozSn] = s[copy_i];
                copy_i++;
                copyPozSn++;
            }
        }
        if (s[i] == 32) {
            sn[copyPozSn] = 32;
            copyPozSn++;
            i++;
        }
    }
    sn[copyPozSn] = 0;
    int j = 0;
    while (sn[j] != 0) {
        printf("%c", sn[j]);
        j++;
    }
    printf("\n");
    return sn;
}
int main() {
    int i = 0;
    char *s;
    s = (char *)malloc(30);
    char *s1;
    s1 = (char *)malloc(10);
    char *s2;
    s2 = (char *)malloc(10);
    scanf("%s", s1);
    scanf("%s", s2);
    scanf("\n");
    do {
        scanf("%c", &s[i]);
        i++;
    } while (s[i - 1] != 10);
    s[i - 1] = 0;
    char *sn = my_replace(s, s1, s2);
    free(sn);
    return 0;
}