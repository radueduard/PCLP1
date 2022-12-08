#include <stdio.h>
#include <time.h>

int main()
{
    time_t a;
    struct tm *ora;
    a=time(NULL);
    ora=localtime(&a);
    printf("%d %d% d", ora->tm_sec,ora->tm_min,ora->tm_hour);

    return 0;
}