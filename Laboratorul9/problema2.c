#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *area;
    t= time(NULL);
    area= localtime(&t);
    printf("Local time is:%s", asctime(area));
    return 0;
}
