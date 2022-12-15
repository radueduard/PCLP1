#include <stdio.h>
#include<time.h>

char* timestr(struct tm t, char* time)
{
    printf("%d:%d:%d\n", t.tm_hour, t.tm_min, t.tm_sec);
    return time;
}

int main(void)
{
time_t T; 
struct tm *t;
T = time (NULL); 
t = localtime(&t);
char time[100];
printf ("%s", timestr(*t,time));
}
