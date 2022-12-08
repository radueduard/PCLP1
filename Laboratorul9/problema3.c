#include <stdio.h>
#include <time.h>
#include <string.h>
void timestr(struct tm t,char *timp){
    int tn_sec,tn_min,tn_ora,v[7];
    tn_sec=t.tm_sec;
    tn_min=t.tm_min;
    tn_ora=t.tm_hour;
    printf("%d %d %d\n",tn_ora,tn_min,tn_sec);
    v[0]=tn_ora/10;
    v[1]=tn_ora%10;
    v[2]=tn_min/10;
    v[3]=tn_min%10;
    v[4]=tn_sec/10;
    v[5]=tn_sec%10;
    timp[0]=v[0]+'0';
    timp[1]=v[1]+'0';
    timp[3]=v[2]+'0';
    timp[4]=v[3]+'0';
    timp[6]=v[4]+'0';
    timp[7]=v[5]+'0';
    timp[2]=':';
    timp[5]=':';
    timp[8]=0;

}

int main() {
    time_t t;
    struct tm *area;
    char timp[20];
    t= time(NULL);
    area= localtime(&t);
    timestr(*area,&timp);
    printf("%s",timp);
    return 0;
}
