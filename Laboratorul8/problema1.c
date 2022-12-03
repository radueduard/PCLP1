#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* my_replace(char* s, char* s1, char* s2);

int main()
{
	char *s, *s1, *s2,*p;
	s = (char*)malloc(100 * sizeof(char));
	s1 = (char*)malloc(100 * sizeof(char));
	s2 = (char*)malloc(100 * sizeof(char));
	p = (char*)malloc(100 * sizeof(char));
	scanf("%s%s%s",s1, s2,s); //gets
	p = my_replace(s, s1, s2);
	printf("%s\n", p);
}

char* my_replace(char* s, char* s1, char* s2)
{
	char* p = (char*)malloc(100 * sizeof(char));
	char* q = (char*)malloc(100 * sizeof(char));
	q = strstr(s, s1);
	int x = s-q;
	strncpy(p, s, x);
	strcat(p, s2);
	int y = strlen(s) - x - strlen(s1);
	strncat(p, s, y);
	return p;
}
