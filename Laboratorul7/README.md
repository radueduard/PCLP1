## **Problema 1**

Scrieti o functie ce interschimba doua numere intregi. Functia va avea urmatorul antet:

```c
void swap(int *pa, int *pb);
```

## ***Date de intrare:***
Doua numere intregi, `a` si `b`.

## ***Date de ieşire:***
Valorile `a` si `b`, in urma interschimbarii.

## ***Restrictii:***
- `a` si `b` sunt numere intregi
  
## ***Exemplu:***
|Intrare|	Ieşire|
|:---|:---|
|2 5	|5 2|

## ***Implementare:***
[problema1.c](./problema1.c)

## **Problema 2**

Scrieti o functie care numara cate elemente pozitive, cate elemente negative si cate elemente nule se afla intr-un vector. Antetul functiei va fi:
```c
void count(int n, int *v, int *zero, int *poz, int *neg);
```

## ***Date de intrare:***
- `n` - dimensiunea vectorului
- `n numere` intregi

## ***Date de ieşire:***
- Numarul de elemente nule
- Numarul de elemente pozitive
- Numarul de elemente negative

## ***Restrictii:***
- 0 <= n <= 100

## ***Exemplu:***
|Intrare|	Ieşire|
|:---|:---|
|5<br>-2 -1 0 1 2|nule: 1<br>pozitive: 2<br>negative: 2|

## ***Implementare:***
[problema2.c](./problema2.c)

## **Problema 3**

Scrieti o functie pentru stergerea a `n` caractere dintr-o pozitie `p` (data) a unui sir. Se va folosi functia `strcpy`.

```c
char *strdel(char *p, int n); // sterge n caractere din pozitia p
```

Pentru a sterge 5 caractere incepand cu pozitia 3 (al 4-lea caracter) din sirul s va trebui sa apelati: `strdel(s + 3, 5)`.

Scrieti o functie pentru inserarea unui sir `s` la inceputul sirului dat `p`, folosind functiile `strcpy` si `strcat`.

```c
char *strins(char *p, char *s); // insereaza la p, sirul s
```
 
Un program care va cauta si inlocui un sir dat cu alt sir (de lungime diferita) intr-un text. Vor fi inlocuite toate aparitiile sirului dat. Se vor folosi functiile definite anterior si functii de biblioteca.
Textul se va introduce in program ca sir constant. Sirul cautat si cel cu care va fi inlocuit se citesc.

## ***Date de intrare:***
Trei siruri de caractere:
- textul
- sirul de inlocuit
- sirul cu care se inlocuieste

## ***Date de ieşire:***
Textul modificat.

## ***Restrictii:***
- strlen(text) <= 3000
- strlen(sir_de_inlocuit) <= 20
- strlen(sir_cu_care_se_inlocuieste) <= 20

## ***Exemplu:***
|Intrare         |	Ieşire|
|:-------------  |:----|
|ala bala portocala<br>ala<br>lala          |	lala blala portoclala|

## ***Implementare:***
[problema3.c](./problema3.c)

## **Problema 4**

Scrieti o functie care extrage un subsir de lungime data dintr-o pozitie data a unui sir:

```c
char* substr(char *src, int n, char *dest); // extrage de la pozitia src in dest n caractere
```

Functia are ca rezultat adresa sirului extras.
Pentru a extrage 5 caractere incepand cu pozitia 3 (al 4-lea caracter) din sirul `s` in sirul `p` va trebui sa apelati cu parametri: `substr(s + 3, 5, p)``.

## ***Date de intrare:***
- sirul de caractere
- doua numere intregi: pozitia in cadrul sirului si numarul de caractere extrase

## ***Date de ieşire:***
sirul de caractere extras

## ***Restrictii:***
- strlen(sir) <= 100
- pozitia si numarul sunt numere intregi valide pentru sirul dat

## ***Exemplu:***
|Intrare	|Ieşire|
|:---|:---|
|abcdefg<br>2 3|	cde|

## ***Implementare:***
[problema4.c](./problema4.c)

## **Problema 5**

Scrieti o functie care calculeaza panta si ordonata pentru o dreapta data prin 2 puncte.
Ecuatia dreptei data prin panta si ordonata este `y = m * x + n`

```c
void panta(int x1, int y1, int x2, int y2, float *m, float *n);
```

> Daca dreapta este verticala, m va avea valoarea `INT_MAX` (definita in `limits.h`).

Scrieti un main in care cititi 3 puncte. Primele 2 puncte definesc o dreapta. Verificati daca cel de-al treilea punct dat apartine acestei drepte.

## ***Date de intrare:***
Coordonatele a doua puncte ce determina dreapta si ale unui punct pentru care se verifica daca apartine dreptei.

## ***Date de ieşire:***
Unul dintre cele doua mesaje - `DA` sau `NU`, daca punctul apartine dreptei, respectiv daca nu apartine.

## ***Restrictii:***
- coordonatele sunt numere intregi valide

## ***Exemplu:***
|Intrare|	Ieşire|
|:---|:---|
|1 1 <br>2 2 <br>3 3	|DA|

## ***Implementare:***
[problema5.c](./problema5.c)

## **Problema 6**

Scrieti o functie care extrage urmatorul cuvant format numai din litere mici incepand de la o adresa data. Functia are ca rezultat adresa imediat urmatoare cuvantului extras. Cuvantul extras se va gasi in *word.

```c
char *next (char *from, char *word);
```

Scrieti un program pentru citirea unei linii ce contine cuvinte formate din litere mici si alte siruri si afisarea doar a cuvintelor formate din litere mici.

## ***Date de intrare:***
Un sir de caractere de lungime `N`.

## ***Date de ieşire:***
Cuvintele formate din litere mici, in ordine, separate prin spatiu.

## ***Restrictii:***
- N <= 100
- Se va considera separator de cuvant orice caracter cu exceptia literelor.

## ***Exemplu:***
|Intrare|	Ieşire|
|:---|:---|
|( unu, 1 doi DOI trei; “patru” cinCi s@s3)	|unu doi trei patru cin i s s|

## ***Implementare:***
[problema6.c](./problema6.c)
