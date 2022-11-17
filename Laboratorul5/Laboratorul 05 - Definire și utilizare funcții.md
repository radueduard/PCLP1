## **Problema 1 (rezolvata)**
Scrieţi o funcţie care să calculeze numărul de cifre ale unui număr întreg dat ca parametru, N. În funcţia main() citiţi un număr de la tastatură şi afişaţi rezultatul apelului funcţiei. Antetul funcţiei trebuie să respecte următorul format:

```c
int nrcf(long n)
```

## ***Date de intrare:***
Un numar dat N

## ***Date de ieşire:***
Numarul de cifre al numarului citit

## ***Restricţii:***
- -1,000,000 < N < 1,000,000

## ***Exemplu:***
| Intrare   | Ieşire   |
|:----------|:---------|
| 12345     | 5        |
| 9         | 1        |
| -325      | 3        |

## ***Rezolvare:***

```c
#include <stdio.h>
 
int nrcf(long n) {
    if (n == 0) {
        return 1;
    }
    int nr = 0;  /* declar un contor in care sa numar cifrele */
    while (n) {            /* cat timp mai pot obtine o cifra */
        n = n/10;          /* o trunchiez pe ultima           */
        nr++;              /* incrementez contorul            */
    }
    return nr; /* functia intoarce numarul de cifre */
}
 
int main() {
    long N;
    printf("N = ");                                       /* afisam un mesaj pentru utilizator      */
    scanf("%ld", &N);                                     /* citim numarul introdus de la tastatura */
    printf("Numarul %ld are %d cifre!\n", N, nrcf(N));    /* afisez numarul de cifre                */
    return 0;
}
```

## ***Implementare:***
[problema1.c](./problema1.c)

## **Problema 2**

Scrieţi o funcţie care să verifice dacă un număr întreg `n` conţine cifra `c`. Numerele `n` şi `c` sunt date ca parametri. Antetul funcţiei trebuie să respecte următorul format:

```c
int cifra(int n, int c)
```

## ***Date de intrare:***
Programul primeste 2 parametri n si c ca in antetul de mai sus

## ***Date de ieşire:***
Se va afisa `DA` sau `NU`. Astfel ca `DA` semnifica existenta cifrei `c` in numarul `n`, sau `NU` in caz contrar

## ***Restrictii si Precizari:***
- −2,147,483,648 < n < 2,147,483,647
- 0 ≤ c ≤ 9

## ***Exemplu:***
| Intrare  | Ieşire |
|:---------|:-------|
| 13584 3  | DA     |
| 100111 0 | DA     |
| 666013 8 | NU     |

## ***Implementare:***
[problema2.c](./problema2.c)

## **Problema 3**

`Ipoteza lui Goldbach`: Orice număr par se poate exprima printr-o sumă de două numere prime, nu neapărat distincte.

1. Scrieţi o funcţie care să verifice dacă un număr întreg este prim sau nu. Funcţia va returna valoarea 1 dacă `N` este număr prim şi 0 în caz contrar. Si trebuie sa aiba urmatorul antet:

```c
int prim(int n)
```

2. Scrieţi un program care verifică `Ipoteza lui Goldbach` prin afişarea tuturor descompunerilor distincte(de ex. nu se vor afişa şi “5+7” şi “7+5”) posibile în sumă de numere prime ale unui număr citit de la tastatură. Programul va apela funcţia `prim()` .

> Observaţie: Se va considera pentru această problemă că numărul 1 este prim.

## ***Date de intrare:***
Un numar **N** par.

## ***Date de ieşire:***
Afisarea tuturor descompunerilor pentru numarul dat **N**

## ***Restrictii:***
- 2 ≤ **N** ≤ 200000

## ***Exemplu:***
| Intrare   | Ieşire            |
|:----------|:------------------|
| 12        | 1 + 11<br>5 + 7   |

## ***Implementare:***
[problema3.c](./problema3.c)

## **Problema 4**

Se citesc de la tastatură patru numere întregi reprezentând două fracţii `x1 / y1` şi `x2/ y2`. Aduceţi fracţiile la acelaşi numitor (cel mai mic posibil) folosind o funcţie care calculează cel mai mic multiplu comun a două numere întregi. Consideraţi că fracţiile date ca input sunt deja în formă ireductibilă. Antetul funcţiei trebuie să respecte următorul format:

```c
int cmmmc(int a, int b)
```

> Hint: cmmmc(a, b) = (a * b) / cmmdc(a, b);

## ***Date de intrare***
Patru numere intregi reprezentand x1, y1, x2, y2 cu semnificatia din enunt

## ***Date de ieşire:***
Cele 2 fractii aduse la acelasi numitor

## ***Restrictii:***
- y1 != 0
- y2 != 0

## ***Exemplu:***
| Intrare          | Ieşire            |
|:-----------------|:------------------|
| 1  2<br>1  11    | 11  22<br>2  22   |
| 5  12<br>3  14   | 35  84<br>18  84  |

## ***Implementare:***
[problema4.c](./problema4.c)

## **Problema 5**

Să se scrie un program pentru calculul sumei seriei Taylor pentru funcţia $e^x$ până la un termen dat:


$$
e^x = 1 + \frac{x}{1!} + \frac{x^2}{2!} + \frac{x^3}{3!} + … + \frac{x^n}{n!}
$$


Se vor defini şi utiliza următoarele funcţii:

- ***Funcţie pentru calculul sumei seriei Taylor în punctul x până la un termen n dat***

```c
  double taylor(double x, int n)
```

- ***Funcţie pentru calculul factorialului unui număr întreg:***

```c
  int factorial(int n)
```

- ***Funcţie pentru calculul puterii întregi a unui număr dat:***

```c
  double putere(double x, int n)
```

## ***Date de intrare:***
Fişierul de intrare va avea o singură linie, pe care se vor afla un număr real X şi un număr natural N.

## ***Date de ieşire:***
Valoarea expresiei expuse mai sus pentru `x` şi `n` date, cu precizie de patru zecimale.

## ***Restrictii:***
- 0 < N ≤ 1000

## ***Exemplu:***
| Intrare   | Ieşire   |
|:----------|:---------|
| 2.5 10    | 12.1817  |

## ***Implementare:***
[problema5.c](./problema5.c)

## **Problema 6**

Se citesc `n` puncte de la tastatură, date prin coordonatele lor: `x[i]`, `y[i]`, i=1,n. Să se afişeze perechea de puncte între care distanţa este maximă (dacă există mai multe astfel de perechi, se poate afişa oricare dintre ele), precum şi această distanţă. Se va defini şi folosi o funcţie pentru calculul distanţei dintre două puncte în plan, care trebuie să respecte următorul antet:

```c
float dist(int x1, int y1, int x2, int y2)
```

## ***Date de intrare:***
Un numar natural `n`, urmate de `n` linii, pe fiecare linie cate un punct dat prin coordonatele sale în plan, cu specificatia din enunt.

## ***Date de ieşire:***
Pe primele doua linii perechea de puncte intre care distanta e maxima. Pe a treia linie se va regasi distanta.

## ***Exemplu:***
| Intrare                         | Ieşire                  |
|:--------------------------------|:------------------------|
| 4<br>0 0<br>0 1<br>1 0<br>1 1   | 0 0<br>1 1<br>1.414214  |

## ***Implementare:***
[problema6.c](./problema6.c)

## **Problema 7**

Scrieţi o funcţie care sortează cifrele unui număr astfel:

- descrescător, dacă numărul conţine cifra 0
- crescător, dacă numărul nu conţine cifra 0

Funcţia trebuie să respecte următorul antet:

```c
int transforma(int n)
```

> HINT! Pentru a sorta cifrele, cea mai simpla metoda este sa folositi un vector cu 10 elemente in care sa memorati pentru fiecare cifra, de cate ori apare aceasta in numar. Pentru a afisa numarul sortat, trebuie sa parcurgeti vectorul si sa afisati cifrele in ordine crescatoare/des

## ***Date de intrare:***
Un numar dat N cu specificatia din enunt.

## ***Date de ieşire:***
Cifrele numarului dat, sortate dupa cum se cere in enunt.

## ***Restrictii:***
- 0 ≤ N ≤ 1000000000

## ***Exemplu:***
| Intrare    | Ieşire    |
|:-----------|:----------|
| 19430123   | 94332110  |
| 2534562    | 2234556   |

## ***Implementare:***
[problema7.c](./problema7.c)

## **Problema 8**

Scrieţi o funcţie care caculează aria intersecţiei a două dreptunghiuri, date prin coordonatele colţurilor stânga-sus şi dreapta-jos. Coordonatele sunt numere întregi pozitive. Funcţia trebuie să respecte următorul antet:

```c
int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21, int x22, int y22)
```

## ***Date de intrare:***
Se vor citi 8 numere intregi, reprezentand coordonatele colturilor celor 2 figuri geometrice. Ele vor fi date in ordine conform cu antetul functiei pus la dispozitie in enunt.

## ***Date de ieşire:***
Un numar reprezentand aria intersectiei dintre cele 2 dreptunghiuri.

## ***Restrictii:***
- Coordonatele sunt numere intregi strict pozitive
- Numerele vor fi in intervalul [0, 1.000.000]

## ***Exemplu:***
| Intrare                  | Ieşire   |
|:-------------------------|:---------|
| 1 10 5 5<br/> 2 7 4 4    | 4        |
| 1 3 3 1<br/> 2 4 4 4     | 0        |

## ***Implementare:***
[problema8.c](./problema8.c)
