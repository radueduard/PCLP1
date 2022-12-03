#include <stdio.h>
<<<<<<< HEAD
#include <string.h>

char* substr(char *src, int n, char *dest){
    strncpy(dest, src, n);
    return dest;
}

int main(){
    char s1[100], s2[100];
    int pozitie, lungime;
    scanf("%s%d%d", s1, &pozitie, &lungime);
    substr(s1 + pozitie, lungime, s2 );
    printf("%s ", s2);
=======

int main()
{
    printf("hello world\n");
>>>>>>> main
    return 0;
}