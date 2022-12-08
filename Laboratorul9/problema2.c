#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    time_t t;
    struct tm *area;
    t=time(NULL);
    area=localtime(&t);
    printf("Ora curenta este: %02d:%02d:%02d \n", area->tm_hour,area->tm_min,area->tm_sec);
    printf("Data curenta este: %d.%02d.20%d", area->tm_mday, area->tm_mon,area->tm_year-100);
    return 0;
}
