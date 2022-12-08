#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct pereche{
    char  cuv[20];
    int nr_aparitii;
};
int main()
{
    char **s=malloc(2000*sizeof(char));
    int *v=calloc(1001,sizeof(int));
    char cuv[20];
    int n;
    struct pereche a[1000];
    scanf("%d",&n);
    gets();
    for (int i = 0; i < n; i++)
    {
        scanf("%s", cuv);
        s[i] = (char *)malloc((strlen(cuv) + 1));
        strcpy(s[i], cuv);
    }
    for(int i=0;i<n;i++){
        v[i]++;
        strcpy(a[i].cuv,s[i]);
        for(int j=i+1;j<n;j++){
            if(strcmp(s[i],s[j])==0) {
                v[i]++;
                s[j]="";
            }
        }
        a[i].nr_aparitii=v[i];
        if(strcmp(s[i],"")!=0){
            printf("%s %d\n",a[i].cuv,a[i].nr_aparitii);
        }
    }
    return 0;
}