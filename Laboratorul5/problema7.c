//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int cifra(int, int);
// functia cifra returneaza 0 sau 1 daca cifra c se gaseste in numarul n
int transforma(int);
// functia f transforma numarul dat
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", transforma(n));
	return 0;
}

int cifra(int n, int c) {
    do {
        if (n % 10 == c)
            return 1;
        n /= 10;
    } while (n);
    return 0;

}

int transforma(int n)
{
	int v[10]={0},i;
	int ok=cifra(n,0);
	//verificam daca 0 se afla in numar pentru a stabili afisarea crescatoare/descrescatoare
	while(n)
	{
		v[n%10]++;
		n/=10;
	}
	//prin while am pus toate cifrele numarului intr un vector de aparitii
	if(!ok)
		for(i=0;i<9;i++)
			while(v[i]--)
				n=n*10+i;
	else
		for(i=9;i>=0;i--)
			while(v[i]--)
				n=n*10+i;
	/*dupa ce am stabilit daca 0 s-a aflat sau nu in numar, am plecat cu cifrele,
	fie de la 1,fie de la 9, si le am adaugat de cate ori apareau in vechiul numar
	*/

	return n;
	//am returnat numarul obtinut

	
}