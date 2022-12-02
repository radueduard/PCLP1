#include <stdio.h>
#include <string.h>

char* substr(char* src, int n, char* dest);

int main()
{
    char sir[100], s[100] = "";
    int a, b;
    scanf("%s", sir);
    if (strlen(sir) > 100)
    {
        printf("Date invalid introduse.");
        return 0;
    }
    scanf("%d%d", &a, &b);
    substr(sir + a, b, s);
    printf("%s\n", s);
}

char* substr(char* src, int n, char* dest)
{
    strcpy(src + n, "");
    strcpy(dest, src);
    printf("%s", dest);
}
