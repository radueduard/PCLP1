<<<<<<< HEAD
## **Problemă rezolvată**

Copiaţi şi rulaţi următorul program pe staţia la care vă aflaţi şi scrieţi câte un comentariu în care să explicaţi ce face fiecare instrucţiune. Este foarte important să înţelegeţi cum să folosiţi pointerii în C. Dacă nu înţelegeţi ceva din program, întrebaţi asistenţii.

```c
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
 
int main ()
{
   char c = 'a', *p, s[100];
   p = &c;
   printf ("%c %c %c", *p, *p+1, *p+2);
   s[0] = 'A'; s[1] = 'B'; s[2] = 'C'; s[3] = '\0';
   p = s;
   printf ("\n%s %s %c %s", s, p, *(p+1), p+1);
   strcpy (s, "\nacesta este un exemplu de lucru cu pointeri");
   printf ("%s", s);
   p += 17;
   for (; *p != '\0'; ++p) {
      if (*p == 'e')
         *p = 'E';
      if (*p == ' ')
         *p = '\n';
   }
   printf ("%s\n", s);
 
   return 0;
}
```

# Probleme

## **Problema 1**

Sa se scrie un program care inlocuieste intr-un sir de caractere `s` toate aparitiile lui `s1` cu `s2`.

Rezolvarea va contine o funcţie care înlocuieşte într-un şir `s` prima apariţie a unui subşir dat `s1` printr-un şir dat `s2`, folosind un vector intermediar alocat dinamic, în care se construieşte şirul rezultat.

Funcţia declarată trebuie să respecte următorul antet:

```c
char* my_replace(char *s, char *s1, char *s2)
```

## ***Date de intrare:***

- Prima linie din fisierul de intrare va contine subsirurile s1 si s2 separate de un spatiu.
- Pe cea de-a doua linie din fisierul de intrare se va gasi sirul s.
- Sirurile sunt de lungime maxim 100.

## ***Date de ieşire:***

O singura linie care contine sirul initial `s` in care toate aparitiile lui `s1` au fost inlocuite cu `s2`.

## ***Exemplu:***

| Intrare                              | Ieşire                    |
|:-------------------------------------|:--------------------------|
| imi nu-mi<br>mie imi plac pointerii  | mie nu-mi plac pointerii  |


## **Problema 2**

Să se scrie un program care citeşte numere de la tastatură până la întâlnirea numărului 0 şi care le stochează într-un vector alocat dinamic, ce va fi realocat dacă este nevoie. La final, se va afişa vectorul stocat, pentru verificare.

Pentru acest lucru, vom avea nevoie de următoarele variabile:

- int *v: vectorul în care se reţin numerele
- int cap: capacitatea curentă a vectorului v
- int n: numărul efectiv de numere stocate în v

Se va porni cu o capacitate inţială (de exemplu, cap = 5) şi, în momentul în care citim un nou număr şi nu mai există spaţiu pentru a fi stocat (cap == n), se va creşte capacitatea (fie printr-un anumit număr, fie se va dubla) şi se va realoca vectorul v cu această noua capacitate.

## ***Date de intrare:***

Pe prima linie se va afla un sir de numere terminat care se termina cu cifra 0.

## ***Date de ieşire:***

Pe prima linie se va afla sirul initial de numere introduse.

## ***Restrictii si Precizari:***

- Exista cel putin un numar diferit de 0 in sirul initial.
- Numarul 0 nu va face parte din sirul initial si se considera terminatorul sirului de numere.

## ***Exemplu:***

| Intrare                                  | Ieşire                                 |
|:-----------------------------------------|:---------------------------------------|
| 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 0 | 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 |
Problema 3

Să se scrie un program pentru citirea unor cuvinte (de la tastatură) şi afişarea numărului de apariţii ale fiecărui cuvânt. Cuvintele au maxim 19 litere fiecare.

Se va folosi un vector de pointeri la cuvinte şi un vector de numere întregi. Variante:

Cei doi vectori au o dimensiune maximă şi nu se mai extind.
Cei doi se alocă şi se extind dinamic (se realocă dacă este nevoie).
Date de intrare

Pe prima linie din fisierul de intrare se va afla un numar natural n ce reprezinta numarul de cuvinte din fisier.

Pe urmatoarele linii se vor afla cele n cuvinte ce urmeaza a fi citite.

Date de ieşire

Fisierul de iesire va contine pe fiecare linie cate o pereche de forma “cuvant numar_aparitii”.

Cuvintele trebuie afişate în ordinea în care au fost găsite în fişierul de intrare.

Restrictii si Precizari

n ⇐ 1000
Exemplu

Intrare	Ieşire
6 
ana are 
mere are mere mere	ana 1 
are 2 
mere 3
Problema 4

Să considerăm următoarea problemă: dorim să calculăm C(n,k) folosind relaţia de recurenţă:

C(n,k) = C(n-1,k) + C(n-1,k-1)

Să considerăm că am ales să rezolvăm problema în următorul mod: definim o matrice c de dimensiuni suficient de mari, în care elementul c[i][j] reprezintă valoarea C(i,j). Vom iniţializa linia 1 a matricei (C(1,0) = C(1,1) = 1) şi vom calcula, pe rând, aplicând relaţia de recurenţă, valorile C(i,j) până când am obţinut valoarea cerută de problemă: C(n,k).

Acest algoritm rezolvă problema, dar prezintă un dezavantaj. Pentru calculul unei valori, trebuie păstrată în memorie o matrice de dimensiuni relativ mari, care ocupă multă memorie. În plus, observăm că pentru a calcula C(i,j), care se va afla pe linia i în matrice, avem nevoie doar de valori de pe linia i-1. Astfel, putem aduce o economie de memorie majoră în program dacă în loc să păstrăm întreaga matrice în memorie, păstrăm doar doi vectori vim1[] şi vi[] care să reprezinte liniile i-1, respectiv i din matrice.

Avem acum două optiuni:

După terminarea calulului valorilor de pe o linie, în vectorul vi[], putem să le copiem pe toate în vectorul vim1[] şi să continuăm calculul următoarei linii în vi[]. Această metodă, însă, presupune ca după fiecare linie să copiem “n” elemente dintr-un vector în altul, şi introduce un cost de eficienţă inutil (ceea ce am economisit la capitolul memorie, irosim la capitolul rapiditate a programului).
Metoda mai rapidă şi mai elegantă este ca, în loc să copiem conţinutul lui vi[] în vim1[], să interschimbăm doar variabilele de tip pointer care indică către începutul acestor şiruri. Altfel spus, nu mutăm efectiv valorile prin memorie, ci doar le interschimbăm “rolul”. În acest mod, se efectuează în loc de mutarea a “n” elemente, doar cele trei instrucţiuni ale interschimbării de variabilă.
Să se scrie un program care calculează valoarea lui C(n,k) prin metoda descrisă mai sus, reducând matricea la doi vectori, şi schimbând după fiecare pas, rolul jucat de aceşti doi vectori.

Date de intrare

Pe o singura linie se vor afla cele 2 valori n si k.

Date de ieşire

Pe prima linie din fisierul de iesire se va afisa valoarea C(n, k).

Restrictii si Precizari

0 ≤ k ≤ n ≤ 25
Exemplu

Intrare	Ieşire
5 3	10
Problema 5

Se citesc de la tastatură cuvinte separate prin câte un spatiu alb. Pornind de la cuvintele citite, se construieşte un şir de caractere după următoarele reguli:

Primul cuvânt citit se adaugă la şirul de caractere;
Fiecare din următoarele cuvinte citite se adaugă la şirul de caractere dacă ultimele două litere ale ultimului cuvânt din şir coincid cu primele două litere ale cuvântului curent (nu se face distincţie între literele mici şi cele mari);
Cuvintele adăugate la şirul de caractere sunt despărţite de caracterul ’-’.
Date de intrare

Pe prima linie din fişierul de intrare se va afla un numar natural n reprezentand numarul de cuvinte din fisier. Pe urmatoarea linie se afla cele n cuvinte separate prin cate un spatiu.

Date de ieşire

O singura linie ce reprezinta cuvintele din sirul separate prin cate un '-' si care respecta ordinea din cerinta.

Restrictii si Precizari

n ⇐ 100
Exemplu

Intrare	Ieşire
5 
abC def bcFr ty froop	abC-bcfR-froop
=======
## **Problemă rezolvată**

Copiaţi şi rulaţi următorul program pe staţia la care vă aflaţi şi scrieţi câte un comentariu în care să explicaţi ce face fiecare instrucţiune. Este foarte important să înţelegeţi cum să folosiţi pointerii în C. Dacă nu înţelegeţi ceva din program, întrebaţi asistenţii.

```c
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
 
int main ()
{
   char c = 'a', *p, s[100];
   p = &c;
   printf ("%c %c %c", *p, *p+1, *p+2);
   s[0] = 'A'; s[1] = 'B'; s[2] = 'C'; s[3] = '\0';
   p = s;
   printf ("\n%s %s %c %s", s, p, *(p+1), p+1);
   strcpy (s, "\nacesta este un exemplu de lucru cu pointeri");
   printf ("%s", s);
   p += 17;
   for (; *p != '\0'; ++p) {
      if (*p == 'e')
         *p = 'E';
      if (*p == ' ')
         *p = '\n';
   }
   printf ("%s\n", s);
 
   return 0;
}
```

## ***Implementare:***
[problema_rezolvata.c](./problema_rezolvata.c)

# Probleme

## **Problema 1**

Sa se scrie un program care inlocuieste intr-un sir de caractere `s` toate aparitiile lui `s1` cu `s2`.

Rezolvarea va contine o funcţie care înlocuieşte într-un şir `s` prima apariţie a unui subşir dat `s1` printr-un şir dat `s2`, folosind un vector intermediar alocat dinamic, în care se construieşte şirul rezultat.

Funcţia declarată trebuie să respecte următorul antet:

```c
char* my_replace(char *s, char *s1, char *s2)
```

## ***Date de intrare:***

- Prima linie din fisierul de intrare va contine subsirurile s1 si s2 separate de un spatiu.
- Pe cea de-a doua linie din fisierul de intrare se va gasi sirul s.
- Sirurile sunt de lungime maxim 100.

## ***Date de ieşire:***

O singura linie care contine sirul initial `s` in care toate aparitiile lui `s1` au fost inlocuite cu `s2`.

## ***Exemplu:***

| Intrare                              | Ieşire                    |
|:-------------------------------------|:--------------------------|
| imi nu-mi<br>mie imi plac pointerii  | mie nu-mi plac pointerii  |

## ***Implementare:***
[problema1.c](./problema1.c)

## **Problema 2**

Să se scrie un program care citeşte numere de la tastatură până la întâlnirea numărului 0 şi care le stochează într-un vector alocat dinamic, ce va fi realocat dacă este nevoie. La final, se va afişa vectorul stocat, pentru verificare.

Pentru acest lucru, vom avea nevoie de următoarele variabile:

- int *v: vectorul în care se reţin numerele
- int cap: capacitatea curentă a vectorului v
- int n: numărul efectiv de numere stocate în v

Se va porni cu o capacitate inţială (de exemplu, cap = 5) şi, în momentul în care citim un nou număr şi nu mai există spaţiu pentru a fi stocat (cap == n), se va creşte capacitatea (fie printr-un anumit număr, fie se va dubla) şi se va realoca vectorul v cu această noua capacitate.

## ***Date de intrare:***

Pe prima linie se va afla un sir de numere terminat care se termina cu cifra 0.

## ***Date de ieşire:***

Pe prima linie se va afla sirul initial de numere introduse.

## ***Restrictii si Precizari:***

- Exista cel putin un numar diferit de 0 in sirul initial.
- Numarul 0 nu va face parte din sirul initial si se considera terminatorul sirului de numere.

## ***Exemplu:***

| Intrare                                  | Ieşire                                 |
|:-----------------------------------------|:---------------------------------------|
| 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 0 | 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 |

## ***Implementare:***
[problema2.c](./problema2.c)

## **Problema 3**

Să se scrie un program pentru citirea unor cuvinte (de la tastatură) şi afişarea numărului de apariţii ale fiecărui cuvânt. Cuvintele au maxim 19 litere fiecare.

Se va folosi un vector de pointeri la cuvinte şi un vector de numere întregi. Variante:

- Cei doi vectori au o dimensiune maximă şi nu se mai extind.
- Cei doi se alocă şi se extind dinamic (se realocă dacă este nevoie).

## ***Date de intrare:***

- Pe prima linie din fisierul de intrare se va afla un numar natural `n` ce reprezinta numarul de cuvinte din fisier.
- Pe urmatoarele linii se vor afla cele n cuvinte ce urmeaza a fi citite.

## ***Date de ieşire:***

- Fisierul de iesire va contine pe fiecare linie cate o pereche de forma “cuvant numar_aparitii”.
- Cuvintele trebuie afişate în ordinea în care au fost găsite în fişierul de intrare.

## ***Restrictii si Precizari:***

n <= 1000

## ***Exemplu:***

| Intrare                            | Ieşire                   |
|:-----------------------------------|:-------------------------|
| 6<br>ana are<br>mere are mere mere | ana 1<br>are 2<br>mere 3 |

## ***Implementare:***
[problema3.c](./problema3.c)

## **Problema 4**

Să considerăm următoarea problemă: dorim să calculăm `C(n,k)` folosind relaţia de recurenţă:

> C(n,k) = C(n-1,k) + C(n-1,k-1)

Să considerăm că am ales să rezolvăm problema în următorul mod: definim o matrice `c` de dimensiuni suficient de mari, în care elementul `c[i][j]` reprezintă valoarea C(i,j). Vom iniţializa linia 1 a matricei (C(1,0) = C(1,1) = 1) şi vom calcula, pe rând, aplicând relaţia de recurenţă, valorile `C(i,j)` până când am obţinut valoarea cerută de problemă: `C(n,k)`.

Acest algoritm rezolvă problema, dar prezintă un dezavantaj. Pentru calculul unei valori, trebuie păstrată în memorie o matrice de dimensiuni relativ mari, care ocupă multă memorie. În plus, observăm că pentru a calcula `C(i,j)`, care se va afla pe linia i în matrice, avem nevoie doar de valori de pe linia i-1. Astfel, putem aduce o economie de memorie majoră în program dacă în loc să păstrăm întreaga matrice în memorie, păstrăm doar doi vectori `vim1[]` şi `vi[]` care să reprezinte liniile i-1, respectiv i din matrice.

Avem acum două optiuni:

- După terminarea calulului valorilor de pe o linie, în vectorul `vi[]`, putem să le copiem pe toate în vectorul `vim1[]` şi să continuăm calculul următoarei linii în vi[]. Această metodă, însă, presupune ca după fiecare linie să copiem “n” elemente dintr-un vector în altul, şi introduce un cost de eficienţă inutil (ceea ce am economisit la capitolul memorie, irosim la capitolul rapiditate a programului).
- Metoda mai rapidă şi mai elegantă este ca, în loc să copiem conţinutul lui `vi[]` în `vim1[]`, să interschimbăm doar variabilele de tip pointer care indică către începutul acestor şiruri. Altfel spus, nu mutăm efectiv valorile prin memorie, ci doar le interschimbăm “rolul”. În acest mod, se efectuează în loc de mutarea a “n” elemente, doar cele trei instrucţiuni ale interschimbării de variabilă.

Să se scrie un program care calculează valoarea lui `C(n,k)` prin metoda descrisă mai sus, reducând matricea la doi vectori, şi schimbând după fiecare pas, rolul jucat de aceşti doi vectori.

## ***Date de intrare:***

Pe o singura linie se vor afla cele 2 valori `n` si `k`.

## ***Date de ieşire:***

Pe prima linie din fisierul de iesire se va afisa valoarea `C(n, k)`.

## ***Restrictii si Precizari:***

- 0 <= k <= n <= 25

## ***Exemplu:***

| Intrare | Ieşire |
|:--------|--------|
| 5 3     | 10     |

## ***Implementare:***
[problema4.c](./problema4.c)

## **Problema 5**

Se citesc de la tastatură cuvinte separate prin câte un spatiu alb. Pornind de la cuvintele citite, se construieşte un şir de caractere după următoarele reguli:

- Primul cuvânt citit se adaugă la şirul de caractere;
- Fiecare din următoarele cuvinte citite se adaugă la şirul de caractere dacă ultimele două litere ale ultimului cuvânt din şir coincid cu primele două litere ale cuvântului curent (nu se face distincţie între literele mici şi cele mari);
- Cuvintele adăugate la şirul de caractere sunt despărţite de caracterul ’-’.

## ***Date de intrare:***

Pe prima linie din fişierul de intrare se va afla un numar natural n reprezentand numarul de cuvinte din fisier. Pe urmatoarea linie se afla cele n cuvinte separate prin cate un spatiu.

## ***Date de ieşire:***

O singura linie ce reprezinta cuvintele din sirul separate prin cate un '-' si care respecta ordinea din cerinta.

## ***Restrictii si Precizari:***

- n <= 100

## ***Exemplu:***

| Intrare                    | Ieşire         |
|:---------------------------|:---------------|
| 5<br>abC def bcFr ty froop | abC-bcfR-froop |

## ***Implementare:***
[problema5.c](./problema5.c)
>>>>>>> main
