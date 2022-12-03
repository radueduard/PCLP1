#include <stdio.h>
#include <string.h>

int min(int a, int b) {
    if(a < b)
        return a;
    else return b;
}

char* substr(char *src, int n, char *dest) {
    int len = min(strlen(src), n);
    for (int i = 0; i < len; ++i)
        dest[i] =src[i];
    dest[len] = '\0';
    return dest;
}

int main()
{
<<<<<<< HEAD
    char sir[101], dest[101];
    int start, end;
    fgets(sir, 101, stdin);
    scanf("%d%d", &start, &end);
    substr(sir + start, end, dest);
    puts(dest);
=======
    printf("hello world\n");
>>>>>>> main
    return 0;
}