#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char **s = malloc(2000 * sizeof(char));
    int *v = calloc(1001, sizeof(int));
    char cuv[20];
    int n;
    scanf("%d", &n);
    gets();
    for (int i = 0; i < n; i++){
        scanf("%s", cuv);
        s[i] = (char *)malloc((strlen(cuv) + 1));
        strcpy(s[i], cuv);
    }
    for (int i = 0; i < n; i++){
        v[i]++;
        for (int j = i + 1; j < n; j++)
            if (strcmp(s[i], s[j]) == 0){
                v[i]++;
                s[j] = "";
            }
        if (strcmp(s[i], ""))
            printf("%s %d\n", s[i], v[i]);
    }
}