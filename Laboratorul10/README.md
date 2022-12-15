# Laboratorul 10. Pointeri la funcţii. Operatori pe biţi.

În acest laborator veţi învăţa să folosiţi:

- Operatori pe biţi
- Pointeri la funcţii
- Directive de preprocesare

## **Problema 1**

Să se scrie o funcţie pentru calculul integralei definite, pe un interval dat `[a,b]` a unei funcţii oarecare (cu rezultat real) `f(x)`, prin metoda trapezelor, cu un număr dat de paşi `n`.

Funcţia primeşte ca argument adresa funcţiei de integrat şi numărul de paşi şi va avea antetul:
```c
double integrala(double (*func) (double x), double a, double b, int n) 
```
Programul principal va apela funcţia de calcul a integralei pentru două funcţii diferite şi un n suficient de mare. Se pot integra functiile `sin(x)` si `cos(x)` pe intervalul `[0, PI]`.

## **Problema 2**

### A

Fie tipul struct mulţime ce poate reprezenta mulţimi cu numere în intervalul `[0..7]` astfel: bitul `i` din a este 1 dacă numărul face parte din mulţime şi 0 altfel. Considerăm biţii numerotaţi de la dreapta spre stânga.
```c
struct multime {
    unsigned char a;
};
```
De exemplu, dacă a = 99 = (01100011) în baza 2, atunci mulţimea va fi {0, 1, 5, 6}.

Să se scrie următoarele funcţii (pt 0 <= x <= 7):
```c
void init(struct multime *m)           // iniţializează mulţimea m cu mulţimea vidă
void add(struct multime *m, int x)     // adaugă pe x la mulţimea m
void del(struct multime *m, int x)     // şterge pe x din mulţimea m
void print(struct multime *m)          // afişează mulţimea m
int contains(struct multime *m, int x) // returnează 1 dacă x se află în mulţimea m şi 0 altfel
```
Să se scrie un program ce testează funcţiile definite mai sus.

### B

Să se modifice structura şi funcţiile definite anterior pentru a putea reprezenta mulţimi de numere întregi, din intervalul `[0, n]`, `n` întreg.

Se va folosi un vector de `unsigned char`, fiecare reprezentând câte 8 numere din mulţime: `v[0] - [0..7]`, `v[1] - [8..15]` etc.

Va trebui să modificaţi struct multime astfel încât să se poată aloca dinamic memorie pentru vector, de exemplu:
```c
struct multime {
    unsigned int n;   // numărul maxim de elemente
    unsigned char *a;
};
```
## ***Cerinţă:***

Se dă o serie de operaţii. Scrieţi un program care acţionează conform acestora.

Operatii:

- A nr - adaugă numărul nr în mulţime
- D nr - elimină numărul nr din mulţime
- C nr - contains( nr ) - dacă nr se află în mulţime, afişaţi DA, altfel NU
- P - afişează elementele mulţimii separate prin spaţiu
  
## ***Date de intrare:***

Un numar n, numarul de instructiuni urmat de o secvenţă de instrucţiuni ca mai sus, câte una pe linie

## ***Date de ieşire:***

Outputul cerut de secvenţă

## ***Exemplu:***

| Intrare                                        | Iesire               |
|:-----------------------------------------------|:---------------------|
| 7<br>A 5<br>A 8<br>P<br>C 5<br>D 5<br>C 5<br>P | 5 8<br>DA<br>NU<br>8 |

## **Problema 3**

Să se definească tipul structură `MATERIA` care conţine cămpurile:

- nume - şir de 15 caractere
- ore_curs - intreg
- tip_examen - tip enumerare, putând avea valorile C, S, A (colocviu, examen de semestru sau de an)
  
Scrieţi funcţia `citire_MAT`, care citeşte informaţiile despre o variabilă de tip `MATERIA`. Se va face validarea tuturor câmpurilor:

- nume - conţine doar litere sau blancuri
- ore_curs - întreg strict pozitiv. OBS. Se presupune ca utilizatorul poate introduce doar un numar intreg, pe care il vom verifica ca este pozitiv!
- tip_examen - doar unul din caracterele de mai sus: C, S, A

> Observatie: Citirile se vor face cu `fgets`, deoarece numele materiei poate contine spatii. Urmatoarele citiri, cat si cele precedente citirii numelui materiei se vor face tot cu fgets deoarece daca folosim scanf raman caractere nescoase din buffer-ul de tastatura (new line('\n') de exemplu)!

> Hint: `atoi` pt transformare in numar intreg

Definiţi tabloul `PROGRAMA` de `MAX` elemente de tip `MATERIA`, `MAX` fiind o constantă predefinită. Scrieţi funcţia `citire_PROGRAMA`, de tip `void`, care iniţializează tabloul `PROGRAMA`, prin apelul funcţiei `citire_MAT`.

Scrieţi funcţia afişare care primeşte ca parametru `un caracter`, `un întreg` şi `tabloul PROGRAMA` şi tipăreşte informaţiile despre materiile din `PROGRAMA` care au `tip_examen` corespunzător caracterului şi `ore_curs` egal cu întregul primit.

Scrieţi un program care apelează funcţiile de mai sus.

## **Problema 4**

Să se definească o structură `MATRICE` care să conţină următorii membri:

- n - numărul de linii ( int )
- m - numărul de coloane ( int )
- a - adresa tabloului care va contine matricea ( int ** )

Se vor scrie următoarele funcţii:

```c
/* creează o matrice de dimensiuni n x m. Funcţia va aloca memorie pentru o nouă variabilă de tip MATRICE şi pentru tabloul conţinut în această 
 * structură (referit prin membrul a). Funcţia va returna adresa noii variabile de tip MATRICE create.
 */
MATRICE* creeaza_MATRICE(int n, int m)
 
/* citeşte de la tastatură o matrice. Dimensiunile se regăsesc în cadrul matricei transmise ca parametru, 
 * urmând a se citi de la tastatură doar elementele tabloului. Funcţia va returna tot adresa ma.
 */
MATRICE* citeste_MATRICE(MATRICE* ma)
 
/* afiseaza pe ecran matricea transmisă ca parametru.
 */
void scrie_MATRICE(MATRICE* ma)
 
/* dacă matricile ma şi mb au aceleaşi dimensiuni, atunci funcţia returnează adresa unei noi 
 * matrici care va conţine suma matricelor ma şi mb. În caz contrar, funcţia va returna NULL 
 *(adunarea nu se poate face, deci rezultatul nu există).
 */
MATRICE* aduna_MATRICE(MATRICE* ma, MATRICE* mb)
 
/* dacă matricile ma şi mb se pot înmulţi, atunci funcţia returnează adresa unei noi matrici 
 * care va conţine produsul matricelor ma şi mb. În caz contrar, funcţia va returna NULL 
 * (înmulţirea nu se poate face, deci rezultatul nu există).
 */
MATRICE* inmulteste_MATRICE(MATRICE* ma, MATRICE* mb) 
```

Scrieti un main in care testati functiile implementate anterior!