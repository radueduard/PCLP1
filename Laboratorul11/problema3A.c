//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	FILE *fp;
	fp = fopen(argv[1],"r");
	if(fp == NULL){
		printf("Nu s-a putut deschide fisierul");
	}
	char s[100];
	while(fgets(s,100,fp)){
		if(strstr(s,argv[2]) != 0)
			printf("%s", s);
	}

	fclose(fp);
	return 0;
}