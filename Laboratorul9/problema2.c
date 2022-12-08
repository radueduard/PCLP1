#include <stdio.h>
#include <time.h>

int main()
{
    time_t a;
    struct tm *ora;
    a=time(NULL);
    ora=localtime(&a);
    printf("Ora este : %s", asctime(ora));

    return 0;
}