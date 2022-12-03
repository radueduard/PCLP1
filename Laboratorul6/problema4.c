//
// Created by Eduard Andrei Radu on 10.11.2022.
//

<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
int comp(char sir1[],char sir2[]){
    int i,l1=0,l2=0;
    for(i=0;i<strlen(sir1);i++){
        l1=l1+sir1[i];
    }
    for(i=0;i<strlen(sir2);i++){
        l2=l2+sir2[i];
    }
    if(l1==l2) return 0;
    else if(l1<l2) return 1;
         else return -1;
}
=======
#include<stdio.h>

>>>>>>> main
int main()
{
    char s1[100],s2[100];
    int i,c;
    scanf("%s",s1);
    scanf("%s",s2);
    c= comp(s1,s2);
    printf("%d",c);
    return 0;
}