<<<<<<< HEAD
# Punctaj

[Lipseste](problema1)
[Lipseste](problema2)
[Lipseste](problema3)
[Lipseste](problema4)
[Lipseste](problema5)
[Lipseste](problema6)
=======
## **Problema 1**

Sa se scrie o functie care sorteaza un vector folosind `bubble sort`. Functia va primi ca parametri vectorul care trebuie sortat, precum si numarul de elemente.

## ***Date de intrare:***
Pe prima linie se va gasi numarul de elemente din vector. Pe a doua linie se vor regasi elementele vectorului.

## ***Date de ieşire:***
O singura linie pe care se vor regasi elementele vectorului sortat.

## ***Restrictii si Precizari:***
- 0 < n < 10.000
  
## ***Exemplu:***
| Intrare                | Ieşire          |
|:-----------------------|:----------------|
| 4<br>9 12 3 1          | 1 3 9 12        |
| 6<br>10 -2 5 17 3 8    | -2 3 5 8 10 17  |

## ***Implementare:***
[problema1.c](./problema1.c)

## **Problema 2**

Să se scrie o funcţie care calculează valorile unghiurilor unui triunghi, în funcţie de lungimile laturilor. Funcţia va fi scrisă în două variante: 
1. cu 2 argumente de tip vector: un vector cu datele de intrare (lungimile laturilor) şi unul cu rezultate (unghiurile). 
2. cu 6 argumente: 3 date (laturile) şi 3 rezultate (unghiurile). Se vor folosi 3 zecimale la afisare.

>Hint: Funcţiile trigonometrice sunt declarate în `math.h`. Pentru valoarea lui **PI**, folositi constanta `M_PI` (definita, de asemenea, in `math.h`).

## ***Date de intrare:***
Se vor citi 3 numere reale `x`, `y`, `z` reprezentand laturile tringhiului.

## ***Date de ieşire:***
Se vor afisa cele 3 unghiuri.

## ***Restrictii***
- 0 < x, y, z < 360
  
## ***Exemplu:***
| Intrare        | Ieşire               |
|:---------------|:---------------------|
| 10.0 10.0 10.0 | 60.000 60.000 60.000 |
| 2 2 2.82       | 45.170 45.170 89.659 |
| 3.0 5.2 6.0    | 30.000 60.073 89.927 |

## ***Implementare:***
[problema2.c](./problema2.c)

## **Problema 3**

Să se scrie o funcţie pentru extragerea elementelor dintr-un vector `a[]` ce se regasesc si intr-un al doilea vector `b[]`. Cei doi vectori sunt neordonati. Rezultatul va fi pus într-un al treilea vector, `c[]`. Funcţia are 5 argumente: adresa (numele) şi dimensiunea vectorilor de intrare ( `a[]` si `b[]`), adresa vectorului rezultat ( `c[]` ).

## ***Date de intrare:***
Pe prima linie se gaseste dimensiunea primului vector urmat pe a doua linie de elementele lui. Pe cea de-a treia linie se va regasi dimensiunea celui de-al doilea vector, in timp ce pe al patrulea rand se regasesc elementele vectorului.

## ***Date de ieşire:***
2 linii dupa cum urmeaza: Pe prima linie dimensiunea vectorului cautat, iar pe al doilea rand elementele din vectorul cautat conform enuntului.

## ***Restrictii si Precizari:***
- Dimensiunile vectorilor sunt de maxim 1000 de elemente

## ***Exemplu:***
| Intrare                              | Ieşire        |
|:-------------------------------------|:--------------|
| 6<br>4 1 5 1 7 10 <br>4 <br>1 10 3 4 | 4<br>4 1 1 10 |

## ***Implementare:***
[problema3.c](./problema3.c)

## **Problema 4**

Funcţie pentru compararea a doi vectori de caractere (doua siruri de caractere), echivalentă ca rezultat cu funcţia `strcmp`. Funcţia primeşte doi vectori de caractere (siruri) şi are un rezultat întreg (negativ - daca primul şir este mai mic, zero - dacă sunt egale sau pozitiv - dacă primul şir este mai mare). Program care verifică funcţia, pentru şiruri citite de la tastatură în doi vectori.

>Hint: Pentru a citi un vector de caractere, de exemplu `char sir[100]` folosiţi scanf(”%s”, sir).
>Atentie! Orice sir de caractere se termina cu valoarea `\0`.

## ***Date de intrare:***
Fisierul de intrare are 2 linii, pe fiecare dintre linii se va gasi un sir de caractere cu specificatia din enunt.

## ***Date de ieşire:***
In fisierul de iesire se va afisa una din urmatoarele valori :
- `1` - primul sir e mai mare
- `0` - cele doua siruri sunt egale
- `-1` - al doilea sir e mai mare

## ***Exemplu:***
| Intrare      | Ieşire |
|:-------------|:-------|
| abcd<br>aadf | 1      |
| abcd<br>abcd | 0      |
| bcde<br>zdg  | -1     |

## ***Implementare:***
[problema4.c](./problema4.c)

## **Problema 5**

Să se scrie o funcţie care primeşte ca parametru un vector `v[]` şi o valoare `x` cu prototipul:

```c
void transform(int v[], int n, int x)
```

Funcţia modifică vectorul `v[]` astfel încât elementele mai mici ca `x` se află la începutul vectorului şi elementele mai mari sau egale cu `x` la sfârşitul lui.

## ***Date de intrare:***
Pe prima linie se gasesc 2 numere `n` si `x`. Pe a doua linie se regasesc `n numere` reprezentand elementele vectorului `v[]`.

## ***Date de ieşire:***
Pe o linie se vor regasi elementele aranjate conform enuntului.

## ***Exemplu:***
| Intrare                     | Ieşire              |
|:----------------------------|:--------------------|
| 10 5<br>7 2 8 1 3 9 7 5 6 1 | 1 2 3 1 8 9 7 5 6 7 |
| 6 6<br>7 2 5 8 2 1          | 1 2 5 2 8 7         |

## ***Implementare:***
[problema5.c](./problema5.c)

## **Problema 6**

Să se scrie un program care citeşte o matrice `A[m][n]` şi copiază elementele matricei în spirală într-un vector `v[]`. Veţi folosi urmatoarele funcţii:
```c
void spirala (int A[][100], int m, int n, int V[]); // copiază elementele lui A în V, în spirală
void afisare (int V[], int dim); // afişează un vector V, de dimensiune dim
```

## ***Date de intrare:***
Pe prima linie se vor regasi 2 numere, `n` si `m` reprezentand numarul de linii si de coloane. Pe urmatoarele `n linii` se vor regasi `m numere` reprezentand elementele matricei.

## ***Date de ieşire:***
Un sir de `n x m` numere reprezentand modul in care sunt parcurse elementele din matrice.

## ***Exemplu:***
| Intrare                                  | Ieşire                     |
|:-----------------------------------------|:---------------------------|
| 3 4<br>1 2 3 4<br>5 6 7 8<br>9 10 11 12  | 1 5 9 10 11 12 8 4 3 2 6 7 |

## ***Implementare:***
[problema6.c](./problema6.c)
>>>>>>> main
