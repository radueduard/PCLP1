## **Problema 1**

Problema generării unor numere aleatoare poate fi considerată iniţial una complicată, dar limbajul C ne pune la dispoziţie biblioteca `stdlib`, cu ajutorul căreia lucrurile vor deveni foarte simple. Funcţiile şi constantele acestei biblioteci sunt declarate în header-ul `stdlib.h` pe care va trebui să-l includeţi la începutul programului pe care îl scrieţi.

Utilizând funcţia `rand()` veţi genera numere aleatoare cu valori cuprinse între 0 si `RAND_MAX`, unde `RAND_MAX` este o constanta definită în `stdlib.h`, având în general valoarea maximă a tipului `int`.

Valorile returnate de această funcţie sunt de fapt termenii unui şir de numere generat după o anumită formula ce foloseşte ca punct de plecare o valoare dată. Din cauza acestui aspect, pentru aceeasi valoare iniţială fixată, programul va genera la fiecare rulare aceleaţi numere aleatoare. Pentru a evita acest lucru, biblioteca pune la dispozitie funcţia `srand()` care primeşte ca parametru un număr întreg reprezentând valoarea iniţiala utilizată în calcularea şirului de numere aleatoare.

Astfel, paşii pentru rezolvarea problemei noastre sunt următorii :

```c
// fixarea valorii utilizate în generarea numerelor:
srand( seed ); // unde seed este o valoare de tip intreg;
// obţinerea unui număr pseudoaleator: 
n = rand(); // unde n este numarul intreg generat aleator;
```

> Pentru a garanta că la fiecare rulare a programului valoarea seed este unică, recomandăm apelarea funcţiei srand cu ora locală a calculatorului în secunde. (Acest lucru va fi prezentat în laboratoarele următoare)

Afişati pe ecran o linie conţinând 3 numere întregi, separate prin spaţiu, generate în mod aleator. Rulaţi programul de mai multe ori cu aceeasi valoare seed. Ce observaţi ? Schimbaţi valoarea seed şi rulaţi din nou. Ce observaţi ?

### **Implementare:**
[problema1.c](./problema1.c)

## **Problema 2**

Scrieţi un program care citeşte şi apoi afişează 3 numere de tip `float` pe aceeaşi linie, separate prin câte un spaţiu, folosind, succesiv, descriptorii `%f`, `%e` şi `%g` pentru cele 3 valori. Folosiţi, pe rând, următoarele date de intrare:

- 1e2 1e2 1e2
- 23.22e+03 23.22e+3 23.22e+03
- 21 1201 122234215001

> Nu contează în ce format introducem datele de intrare (normal sau exponenţial), atât timp cât ele sunt scrise corect, vor fi citite de către `scanf()`. `%g` afişeaza, în funcţie de mărimea numărului, fie în format `%f` (dar fără zerouri la sfârşit), fie în format `%e`, scopul fiind să ocupe cât mai puţin spaţiu numărul afişat

### **Implementare:**
[problema2.c](./problema2.c)

## **Problema 3**

Programul următor afişează valorile funcţiei `sin(x)` pentru valori ale lui `x` între `0` şi `2*PI`, cu pasul `PI/10`.

```c
#include <stdio.h> 
#include <math.h> 
 
int main() 
{ 
     double x, PI = M_PI;
     for (x = 0; x <= 2 * PI; x = x + PI / 10) {
          printf("%lf \n", sin(x)); 
     }
     getchar(); 
     return 0; 
}
```

Modificaţi programul astfel încat pentru fiecare `x` între `0` şi `2*PI` cu pasul `PI/20` să fie afişate valorile lui `x` şi ale funcţiilor `sin(x)`, `cos(x)` sub formă de tabel. Adăugati apoi un cap de tabel şi modificaţi programul astfel încat fiecare coloană din tabel să aibă 8 caractere, iar numerele să fie afişate cu 3 zecimale şi semnul + să apară în faţa numerelor pozitive.

Pentru a folosi funcţiile din `math.h` trebuie să adăugaţi opţiunea `-lm` la compilare.

|Intrare	|Ieşire|
|:---|:---|
|Programul nu are date de intrare.<br>Observaţie: punctele mediane din exemplul alăturat<br>sunt doar pentru a vă ajuta să număraţi spaţierea!<br>Ele nu trebuie afişate!|	¦·······x¦··sin(x)¦··cos(x)¦<br>¦==================¦<br>¦··+0.000¦··+0.000¦··+1.000¦<br>……………………………………|

### **Implementare:**
[problema3.c](./problema3.c)

## **Problema 4**

Scrieţi un program care să determine cadranul în care se află un punct dat prin coordonatele sale reale. Se va afişa un număr între 1 şi 4 sau mesajul punct pe axe.

## **Date de Intrare:**
O singură linie pe care se află două numere reale, `X` şi `Y`, reprezentând coordonatele punctului pe axa Ox, respectiv Oy.

## **Date de Ieşire:**
O singură linie care va conţine numărul cadranului în care se află punctul, sau mesajul “punct pe axe”.

## **Restricţii şi Precizări:**
- -1000 ≤ X, Y ≤ +1000

## **Exemplu:**
|Intrare|	Ieşire|
|:----|:----|
|-23.15 1.2	|2|
|19.2 1|	1|
|0 0|	punct pe axe|

### **Implementare:**
[problema4.c](./problema4.c)

## **Problema 5**

Scrieţi un program care să verifice dacă 3 numere întregi date `a`, `b`, `c` pot forma lungimile laturilor unui triunghi.

## **Date de Intrare:**
O singură linie care va conţine trei numere întregi: `a`, `b` şi `c` separate prin spaţii.

## **Date de Ieşire:**
O singură linie care va contine un mesaj din mulţimea { DA, NU }. Nu afişaţi spaţii sau alte caractere suplimentare.

## **Restricţii şi Precizări:**
- -1.000.000.000 <=> a, b, c <= +1.000.000.000
- a + b + c != 0
  
> Se consideră triunghi şi un triunghi cu un unghi de 180 de grade şi două unghiuri de 0 grade.

## **Exemplu:**
|Intrare|	Ieşire|
|:---|:---|
|5 4 3	|DA|
|-1 2 0	|NU|
|6 6 0	|DA|

### **Implementare:**
[problema5.c](./problema5.c)

## **Problema 6**

Scrieţi un program care citeşte 3 numere reale reprezentând lungimile laturilor unui triunghi şi care afişează tipul de triunghi cu aceste laturi: `oarecare`, `isoscel`, `echilateral`, `dreptunghic` sau `dreptunghic isoscel`.

## **Date de Intrare:**
Trei numere reale: `a`, `b` şi `c`.

## **Date de Ieşire:**
O singură linie care va contine un mesaj din mulţimea { oarecare, echilateral, dreptunghic, isoscel, dreptunghic isoscel }, în funcţie de tipul de triunghi. Nu afişaţi spaţii sau alte caractere suplimentare.

## **Restricţii şi Precizări:**
- Cele trei numere pot forma întotdeauna laturile unui triunghi.
- Două numere reale se vor considera egale dacă diferenţa lor în modul este mai mică decât 0.001.

## **Exemplu:**

|Intrare	|Ieşire|
|:---|:---|
|10 10 10	|echilateral|
|4 5 3	|dreptunghic|
|5 10 10	|isoscel|
|2.8284 2 2	|dreptunghic isoscel|

### **Implementare:**
[problema6.c](./problema6.c)

## **Problema 7**

Scrieţi un program care determină minimul şi maximul dintre 4 numere, folosind doar instructiunea `if`.

## **Date de Intrare:**
O singură linie care va conţine patru numere întregi, A, B, C şi D separate prin spaţii.

## **Date de Ieşire:**
O singură linie care va conţine două numere întregi, separate printr-un singur spaţiu, reprezentând în ordine minimul şi maximul dintre cele patru numere.

## **Restricţii şi Precizări:**
- 1 <=> A, B, C, D <=> 2.000.000.000

## **Exemplu:**
|Intrare	|Ieşire|
|:---|:---|
|23 5321 331245 2000000000	|23 2000000000|

### **Implementare:**
[problema7.c](./problema7.c)

## **Problema 8**

Afişaţi trei numere în ordine crescătoare, folosind doar instrucţiunea `if`.

## **Date de Intrare:**
O singură linie care va conţine trei numere întregi, `A`, `B`, şi `C` separate prin spaţii.

## **Date de Ieşire:**
O singură linie care va conţine numerele în ordine crescătoare, separate printr-un singur spaţiu.

## **Restricţii şi Precizări:**
- 1 <=> A, B, C <= 2.000.000.000

## **Exemplu:**
|Intrare	|Ieşire|
|:---|:---|
|123109 2342 12	|12 2342 123109|

### **Implementare:**
[problema8.c](./problema8.c)

## **Problema 9**

Scrieţi un program care citeşte trei numere întregi, H, M şi S reprezentând ora, minutul şi secunda dintr-un anumit moment al zilei, şi le afişează în format de ceas digital.

## **Date de Intrare:**
O singură linie pe care se află trei numere întregi H, M şi S.

## **Date de Ieşire:**
O singură linie care va conţine momentul zilei exprimat în format de ceas digital HH:MM:SS.

## **Restricţii şi Precizări:**
- 0 <= H <= 23
- 0 <= M, S <= 59

## **Exemplu:**
|Intrare	|Ieşire|
|:---|:---|
|15 42 3|	15:42:03|

### **Implementare:**
[problema9.c](./problema9.c)

## **Problema 10**

În programul anterior observaţi că dacă în loc de a introduce o valoare numerică tastaţi altceva (o literă, de exemplu) programul se va comporta anormal. Încercati să modificaţi programul astfel încat să aveţi protecţie la datele eronate.

Scanf returnează numărul de argumente citite, care se potrivesc cu formatul căutat. Astfel, scanf(”%d”,&a) va returna 1 dacă a citit un întreg sau 0 altfel.

## **Date de Intrare:**
O singură linie pe care se află trei numere întregi H, M şi S sau alte caractere eronate.

## **Date de Ieşire**
O singură linie care va conţine momentul zilei exprimat în format de ceas digital HH:MM:SS sau mesajul Date incorect introduse!

## **Exemplu:**
|Intrare	|Ieşire|
|:---|:---|
|1a 42 3	|Date incorect introduse!|
|11 4.2 3	|Date incorect introduse!|

### **Implementare:**
[problema10.c](./problema10.c)

## **Problema 11**

Scrieţi un program pentru rezolvarea ecuaţiei de gradul 2.

## **Date de Intrare:**
Trei numere reale a, b, c ce reprezintă coeficienţii ecuaţiei de gradul 2 în ordine descrescătoare după puterile lui x.

## **Date de Ieşire:**
Soluţiile reale ale ecuaţiei în ordine crescătoare, cu 2 zecimale. În caz că ecuaţia nu are soluţie se va afişa mesajul “Nu exista solutii”. În caz că ecuaţia are o infinitate de soluţii se va afişa mesajul “Infinit”.

## **Exemplu:**
|Intrare	|Ieşire|
|:---|:---|
|1 -2 1	|1.00|
|1 1 1	|Nu exista solutii|
|1 -3 2	|1.00 2.00|

### **Implementare:**
[problema11.c](./problema11.c)