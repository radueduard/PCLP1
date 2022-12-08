#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *timpCurent  = localtime(&t);
    printf("%s", asctime(timpCurent));
    return 0;
}
