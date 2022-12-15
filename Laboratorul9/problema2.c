#include <stdio.h>
#include <time.h>

int main(void)
{
time_t t; 
struct tm *area;
t = time (NULL); 
area = localtime(&t);
printf ("%s", asctime(area));
}