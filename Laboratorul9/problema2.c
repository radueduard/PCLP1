#include <stdio.h>
#include<time.h>

int main()
{
    time_t timp;
    struct tm *area;
    timp=time(&timp);
    area=localtime(&timp);

    printf("%s", asctime(area));
}