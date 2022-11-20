## Problema 1

Scrieţi un program pentru afişarea codurilor tuturor caracterelor cu coduri între **32** şi **127**, folosind funcţia **printf**într-un ciclu, câte zece caractere pe o linie.

Veţi folosi următorul apel al funcţiei **printf**:
```c
printf("%c = %d ", ch, ch);
```

## **Date de Intrare:**
Această problemă nu are date de intrare.

## **Date de Ieşire:**
Outputul problemei, câte 10 perechi caracter-cod pe linie, folosind **apelul printf de afişare de mai sus**!

### **Implementare:**
[problema1.c](./problema1.c)

## Problema 2

Scrieţi un program pentru afişarea primelor n numere naturale nenule, câte m pe o linie. După fiecare 24 de linii complete afişate, programul va trebui să afişeze un rând liber. Pentru a afişa un rând liber, folosiţi:

```c
printf("\n");
```

Pentru a opri programul, folosiţi secvenţa:

```c
fflush(stdin);
getchar();
```


## **Date de Intrare:**
O singură linie care va conţine două numere naturale, **n** şi **m**.

## **Date de Ieşire:**
Primele `n` numere naturale, cate `m` pe o linie, separate printr-un spaţiu.

## **Restricţii şi Precizări:**
-   1 <= n <= 30000
-   1 <= m <= 13
-   După ultimul număr afişat urmează obligatoriu caracterul `'\n'`, indiferent dacă el este sau nu ultimul de pe linia sa.  
-    **Atenţie!** Pentru a folosi monitorul de evaluare stergeţi din program liniile ce conţin apelurile funcţiilor `fflush` şi `getch`.

## **Exemplu:**
|Intrare |Ieşire |
|:---|:---|
|15 4|1 2 3 4<br>5 6 7 8<br>9 10 11 12<br>13 14 15|

### **Implementare:**
[problema2.c](./problema2.c)

## Problema 3

Scrieţi un program care adună de **n** ori **x** şi de **n** ori **y**. Se vor afişa la fiecare **n/10** termeni calculaţi sumele parţiale şi se vor folosi ambele formate de afişare: **%f** şi **%e**.

## **Date de Intrare:**
O singură linie care va conţine `n`, `x` şi `y`.

## **Date de Ieşire:**
Sumele parţiale, câte una pe linie, în format `%f` `%e` `%f` `%e` (primele două pentru x, următoarele două pentru y).

## **Restricţii şi Precizări:**
-   **x** este de tip **float**
-   **y** este de tip **double**
-   sumele parţiale (să le zicem **sx** şi **sy** vor fi de tip **float**, respectiv **double**)
    
## **Exemplu:**

|Intrare| Ieşire|
|:---|:---|
|100 0.1 0.1|1.000000 1.000000e+00 1.000000<br>1.000000e+00<br>2.000000 2.000000e+00 2.000000<br>2.000000e+00<br>2.999999 2.999999e+00 3.000000<br>3.000000e+00<br>3.999998 3.999998e+00 4.000000<br>4.000000e+00<br>4.999998 4.999998e+00 5.000000<br>5.000000e+00<br>5.999997 5.999997e+00 6.000000<br>6.000000e+00<br>6.999996 6.999996e+00 7.000000<br>7.000000e+00<br>7.999995 7.999995e+00 8.000000<br>8.000000e+00<br>8.999998 8.999998e+00 9.000000<br>9.000000e+00<br>10.000002 1.000000e+01 10.000000<br>1.000000e+01|

### **Implementare:**
[problema3.c](./problema3.c)

## Problema 4

Se citesc numere naturale până la întâlnirea numărului **0**. Să se afişeze toate perechile **(A, B)** de numere citite consecutiv cu proprietatea că al doilea număr reprezintă restul împărţirii primului număr la suma cifrelor sale.

## **Date de Intrare:**
Un şir de numere care se va termina cu numărul 0.

## **Date de Ieşire:**
Se vor afişa toate perechile de numere de forma **(A, B)**, câte una pe o linie, care satisfac proprietatea că B == A mod suma_cifre(A)

## **Restricţii şi Precizări:**
-   0 <= Ni <= 1.000.000.000
-   Se va lua în considerare şi 0-ul final (vezi exemplu).
-   Se garantează că 0 nu este primul număr citit.
-   Aveţi grijă la spaţiul liber de după virgulă şi nu afişaţi spaţii suplimentare la sfârşitul liniilor!
    
## **Exemplu:**
|Intrare| Ieşire |
|:---|:---|
|73 15 3 0 |(15, 3)<br>(3, 0) |

### **Implementare:**
[problema4.c](./problema4.c)

## Problema 5

Se citeşte de la tastatură un număr natural **P**. Să se determine toate tripletele distincte de numere întregi **(i, j, k)** cu proprietatea că ele pot reprezenta laturile unui triunghi de perimetru **P**. Folosiţi maxim două instrucţiuni **for**.

## **Date de Intrare:**
O singură linie pe care se află un număr natural **P**.

## **Date de Ieşire:**
Fişierul de ieşire va conţine pe fiecare linie câte trei numere întregi de forma i j k, separate printr-un singur spaţiu, şi fără spaţii albe la final de linie. Numerele afişate **i**, **j** şi **k** trebuie să fie date în ordine crescătoare.

## **Restricţii şi Precizări:**
-   0 <= P <= 1000
-   Trei numere naturale i, j şi k pot forma un triunghi dacă şi numai dacă:
    -   i + j >= k
    -   i + k >= j
    -   j + k >= i

## **Exemplu:**

|Intrare |Ieşire |
|:---|:---|
|0 | 0 0 0 |
|10 |0 5 5<br>1 4 5<br>2 3 5<br>2 4 4<br>3 3 4|

### **Implementare:**
[problema5.c](./problema5.c)

## Problema 6

Să se scrie un program pentru calculul numărului combinărilor de n luate câte m. Calculul se va efectua prin două metode:
-   Folosind relaţia de recurenţă: `C(n,k)=C(n,k-1)*(n-k+1)/k` pentru k=1,m şi `C(n,0)=1`
-   Folosind definiţia combinărilor: `C(n,m)=n!/(m!*(n-m)!)`
    

## **Date de Intrare:**
O singură linie pe care se află două numere naturale, **n** şi **m**.

## **Date de Ieşire:**
Numărul combinărilor.

## **Restricţii şi Precizări:**
-   0 < n, m <= 10
    
## **Exemplu:**
|Intrare| Ieşire |
|:---|:---|
|5 3 |10 |

### **Implementare:**
[problema6.c](./problema6.c)

## Problema 7

Scrieţi un program pentru calculul valorii funcţiei exponenţiale într-un punct x dat, prin dezvoltare după formula:

O singură linie pe care se află două numere naturale, **n** şi **m**.
-   e^x= 1 + x/1! + x^2/2! + x^3/3! + … + x^n/n! + …
    
Calculaţi această valoare în două variante:
-   Ca sumă a unui număr dat de termeni
-   Ca sumă a termenilor mai mari decât un epsilon dat.
    
Se va folosi relaţia de recurenţă: `t[k] = t[k-1] * x / k t0 = 1`, unde `t[k]` este termenul k din sumă.

Comparaţi rezultatul obţinut cu rezultatul funcţiei `exp(x)` şi rezultatul funcţiei `pow(2.718, x)`.

## **Date de Intrare:**
Numerele **x**, **n** si **EPS** pe o singură linie, separate prin spaţiu.

## **Date de Ieşire:**
Se vor afişa pe aceeasi linie, separate printr-un spaţiu cele patru valori calculate în ordinea: rezultatul sumei unui număr dat de termeni din dezvoltare, rezultatul sumei termenilor mai mari decât **EPS**, rezultatul funcţiei `exp(x)` şi cu rezultatul funcţiei `pow(2.718, x)`. 

## **Restricţii şi Precizări:**
-   valoarea n - 1 reprezintă ultimul termen ce trebuie luat în calcul (inclusiv)
-   EPS şi x sunt de tip double
    

## **Exemplu:**
|Intrare |Ieşire |
|:---|:---|
|3 10 0.001|20.063393 20.085213 20.085537 20.079290 |

### **Implementare:**
[problema7.c](./problema7.c)

## Problema 8

Scrieţi un program pentru calculul rădăcinii pătrate a unui număr (**x**), folosind relaţia de recurenţă între două aproximări succesive ( **r1 şi r2**) ale rădăcinii pătrate a lui **x**: `r2 = (r1 + x/r1) / 2`

Aproximaţia iniţială (**r1**) este **x/2**. Calculul continuă atât timp cât **r1** este diferit de **r2**.

Numerele reale nu pot fi comparate exact, motiv pentru care trebuie să folosiţi un prag de diferenţă sub care consideraţi că două numere reale sunt egale. Asta înseamnă că în loc de a == b veţi verifica dacă **modul(a - b) < prag**. Funcţia pe care o puteţi folosi pentru a calcula modulul unui număr real este **fabs**.

## **Date de Intrare:**
O singură linie pe care se află cele două numere: **x** şi **eps** (epsilon, pragul menţionat mai sus).

## **Date de Ieşire:**
Rădăcina calculată şi rezultatul funcţiei **sqrt(x)**, pe o singură linie, separate printr-un spaţiu.

## **Restricţii şi Precizări:**
-   folosiţi numere de tip **double**
    
## **Exemplu:**
|Intrare |Ieşire |
|:---|:---|
|2 0.00001 |1.414214 1.414214 |

### **Implementare:**
[problema8.c](./problema8.c)

## Problema 9

Scrieţi un program care afişează toate numerele prime dintre primii n termeni ai şirului Fibonacci. El se construieşte după următoarele reguli:
- F(0)=0 
- F(1)=1 
- F(k)=F(k-1)+F(k-2), pentru orice k>1

## **Date de Intrare:**
O singură linie care va conţine un număr natural, **n**.

## **Date de Ieşire:**
Numerele prime dintre primii **n** termeni ai şirului Fibonacci, câte unul pe linie.

## **Restricţii şi Precizări:**
-   1 <= n <= 100000
-   Şirul lui Fibonacci este următorul: 0, 1, 1, 2, 3, 5, 8, 13, 21, …
    
**Exemplu**
|Intrare |Ieşire |
|:---|:---|
|5 |2<br>3| 

### **Implementare:**
[problema9.c](./problema9.c)

## Problema 10

Scrieţi un program care afişează numărul de cifre obţinut prin alipirea numerelor 1, 2, 3, …, n (1234567891011..)

## **Date de Intrare:**
O singură linie pe care se află **n**.

## **Date de Ieşire:**
Numărul cifrelor obţinute prin alipirea numerelor până la **n**, inclusiv.

## **Restricţii şi Precizări:**
-   Începeţi cu numărul 1, **NU** cu numărul 0.
    
## **Exemplu:**
|Intrare |Ieşire |
|:---|:---|
|100 |192|

### **Implementare:**
[problema10.c](./problema10.c)