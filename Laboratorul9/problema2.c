#include <stdio.h>
#include <time.h>
#include<string.h>

struct tm { // definita in time.h
    int tm_sec,tm_min, tm_hour; // sec (0-59), min (0-59), ora (0-23)
    int tm_mday, tm_mon, tm_year; // zi (0-31), luna (0-11), an (dupa 1900)
    int tm_wday; // ziua din saptamana (0-6)
    int tm_yday; // ziua din an (0-365)
    int tm_isdst; // +1 Daylight Savings Time, 0 No DST, -1 don't know
};

int main(){
    time_t t1;
    struct tm t2;
    time(&t1);
    t2 = localtime(&t1);
    printf("%s, %s" ctime(&t1), asctime(t2));
    return 0;
}