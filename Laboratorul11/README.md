# Laboratorul 11. Fişiere text. Argumente în linia de comandă

În acest laborator veţi învăţa să:

- Citiţi şi scrieţi date din fişiere text.
- Trimiteţi şi folosiţi argumente în linia de comandă.
  
## **Problema 1 (Rezolvata)**

Scrieţi un program care citeşte conţinutul unui fişier text `myfile.txt` şi îl trimite către `stdout`.

## ***Date de intrare:***

Fişierul text `myfile.txt`

## ***Date de ieşire:***

Conţinutul fisierului de intrare

## ***Rezolvare:***

```c
#include <stdio.h>
#define BUFMAX 1005
 
int main(int argc, char **argv)
{
    FILE *pFile;
    char buffer[BUFMAX];
 
    pFile = fopen("myfile.txt" , "r");
    if (pFile == NULL)
        printf("Nu s-a putut deschide fisierul");
 
    while (fgets(buffer, BUFMAX, pFile) != NULL) {
		printf("%s", buffer);
    }
	fclose(pFile);
}
```

## ***Problema 2 (Rezolvata)***

Scrieţi un program pentru concatenarea mai multor fişiere text într­un fişier destinaţie. Programul va primi numele fişierelor ca argumente în linia de comandă, în următoarea ordine: destinatie sursa1 sursa2 … sursan.

## ***Date de intrare:***

Fişierele de intrare `sursa1` `sursa2` … `sursan`.

## ***Date de ieşire:***

Fişierele de intrare concatenate în fişierul destinaţie.

## ***Rezolvare:***

```c
#include <stdio.h>
#define BUFMAX 1005
 
int main(int argc, char *argv[])
{
	FILE *dest, *src;
	int i;
	char buffer[BUFMAX];
	dest = fopen(argv[1], "w");
	if (!dest)
	{
		fprintf(stderr, "Eroare! Nu am putut deschide fisierul destinatie!\n");
		return 0;
	}
	for (i = 2; i < argc; ++i)
	{
		src = fopen(argv[i], "r");
		if (!src)
		{
			fprintf(stderr, "Eroare! Nu am putut deschide fisierul sursa (%d)!\n", i);
			return 0;
		}
		while (fgets(buffer, BUFMAX, src) != NULL)
		        fputs(buffer, dest);
		fclose(src);
	}
	fclose(dest);
	return 0;
}
```

## **Problema 3A**

Scrieţi un program pentru căutarea unui şir dat într­un fişier text şi afişarea liniilor care conţin şirul dat. Numele fişierului şi şirul căutat vor fi trimise ca argumente în linia de comandă, în această ordine.

## ***Date de intrare (argumente în linia de comandă):***

Numele fişierului in care se realizează cautarea Stringul căutat

## ***Date de ieşire (consolă):***

Liniile ce conţin şirul căutat

## ***Exemplu:***

Pentru a căuta în fişierul `input.txt` stringul `vacanta`: ./executabil input.txt vacanta

| input.txt | stdout |
|:---|:---|
| Mai e putin si vine vacanta<br>Mie nu imi plac pointerii dar iubesc vacanta<br>Abia astept sesiunea<br>Haideti sa mergem la un uc chiar acum<br>Cine stie sa se dea cu placa de snowboard ?!<br>Vacanta asta merg la Predeal si ma dau cu placa :)<br>Ma asteapta  sesiune infernala :-(<br>Vine vacanta cu trenul din Franta …<br>La multi ani 2021 | Mai e putin si vine vacanta<br>Mie u mi plac pointerii dar iubesc vacanta<br>Vine vacanta cu trenul din Franta …<br> |


## **Problema 3B**

Scrieţi un program pentru căutarea unui şir dat într­un fişier text şi afişarea liniilor care conţin şirul dat. Numele fişierului şi şirul căutat vor fi trimise ca argumente în linia de comandă, în această ordine. Adăugaţi programului posibilitatea de a primi ca argumente şi una sau mai multe dintre următoarele opţiuni (ultimele 2 argumente vor fi întotdeauna numele fişierului şi şirul căutat): 
- ­i ignoră diferenţa dintre litere mici şi litere mari. 
- ­n afişează şi numerele liniilor din fişier care conţin şirul căutat. ­
- c afişează numărul de linii în care s­a găsit şirul căutat. 
  
Aceste 3 argumente pot apărea în orice ordine.

## ***Date de intrare (argumente în linia de comandă):***

Numele fişierului în care se realizează căutarea Parametrii pentru căutare Stringul căutat

## ***Date de ieşire (consolă):***

Liniile ce conţin şirul căutat Numărul liniei din fişierul sursă Numărul de linii în care s­a găsit şirul căutat

## ***Exemplu:***

Dacă, căutăm în fişierul input.txt stringul vacanta: ./executabil ­c ­i ­n input.txt vacanta

| input.txt | stdout |
|:---|:---|
| Mai e putin si vine vacanta<br>Mie nu imi plac pointerii dar iubesc vacanta<br>Abia astept sesiunea<br>Haideti sa mergem la un uc chiar acum<br>Cine stie sa se dea cu placa de snowboard ?!<br>Vacanta asta merg la Predeal si ma dau cu placa :)<br>Ma asteapta  sesiune infernala :-(<br>Vine vacanta cu trenul din Franta …<br>La multi ani 2021 | [1] Mai e putin si vine vacanta <br>[2] Mie nu imi plac pointerii dar iubesc vacanta<br>[6] Vacanta asta merg la Predeal si ma dau cu placa :)<br>[8] Vine vacanta cu trenul din Franta …<br>Numar total de linii: 4 |

## **Problema 4**

Se dă un fişier în care este memorată o tabelă de codificare, sub forma: `caracter_de_codificat caracter_codificat \n`. Să se scrie un program care primeşte ca argumente în linia de comandă numele fişierului conţinând tabela de codificare, numele fişierului de codificat şi numele fişierului în care se va scrie codificarea (în această ordine) şi codifică fişierul primit conform codului. Presupunem un fişier `tabela_de_codare.in` care reţine următoarele corespondenţe:

| tabela_de_codare.in |
|:----|
| a b | 
| b c |
| c d |
| d e |
| e f |
| f g |
| g h |
| h i |
| i j |
| j k |
| k l |
| l m |
| m n |
| n o |
| o p |

## ***Date de intrare (input.txt):***

Textul original

## ***Date de ieşire (output.txt):***

Textul modificat

## ***Exemplu:***

Aplicăm algoritmul de codare pe fişierul input.txt şi vom obţine un fişier output.txt. ./executabil tabela_de_codare.in input.txt output.txt

| Intrare (input.txt ) | Ieşire (output.txt) |
|:---|:---|
| Abia astept examenul de PL<br>In vacanta dorm. Dorm pe partie<br>Cine vrea sa se joace PACMAN<br>Voi n­aveti somn azi	| Bcjb bstfpt fxbnfouc ef PC<br>Jo vbdbotb eprn. Eprn pf pbrtjf <br>Djof vrfb sb sf kpbdf PBDNBO <br>Vpj o­bvftj spno bzj |
