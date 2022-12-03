# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    char c = 'a', * p, s[100];
    p = &c;
    //deorece c este caracter iar p are adresa lui c la afisarea cu adunare afisam cum ar veni carcterul a(48) + 1 adica b
    printf("%c %c %c", *p, *p + 1, *p + 2);
    s[0] = 'A'; s[1] = 'B'; s[2] = 'C'; s[3] = '\0';
    p = s;
    //p acum poiteaza la un sir si la afisea cu +1 sau afiseaza sirul incepand cu adresa s[1],iar la *(p+1) ar veni ca afisarea s[1]
    printf("\n%s %s %c %s", s, p, *(p + 1), p + 1);
    //copiem si afisam sirul
    strcpy(s, "\nacesta este un exemplu de lucru cu pointeri");
    printf("%s", s);
    //la declarea lui p cu 17 incepem de la s[17] si cand gasim e il facem E si inloc de spatiu punem rand nou si dupa afisam
    p += 17;
    for (; *p != '\0'; ++p) {
        if (*p == 'e')
            *p = 'E';
        if (*p == ' ')
            *p = '\n';
    }
    printf("%s\n", s);

    return 0;
}