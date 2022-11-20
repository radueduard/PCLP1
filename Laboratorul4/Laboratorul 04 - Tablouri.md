Problema 1 (rezolvată)

Program care citeşte un număr N şi N note (între 1 şi 10) şi afişează procentul notelor sub 5.

Date de intrare

Pe prima linie se va afla numărul natural N ce reprezintă numărul de note. Pe a doua linie, N numere naturale ce reprezintă notele.

Date de ieşire

Se va afişa un număr real, cu trei zecimale exacte, ce reprezintă procentul notelor sub 5.

Restricţii şi Precizări

0 < N ≤ 100
Notele au valori cuprinse între 1 şi 10.
Rezolvare

Să incepem prin identificarea paşilor ce îi avem de parcurs pentru a rezolva problemei:

citrea numărului N şi a vectorului de note şi stocarea lor
a calcula procentul de note sub 5, va trebui să cunoaştem numărul de note sub 5
afişarea rezultatului calculat
Fie V vectorul în care sunt stocate notele. Pseudocodul care calculează procentul de note sub 5 va fi:

n5 = 0
 
pentru i de la 1 la N cu pasul 1
    daca (V[i] < 5) atunci
        n5 = n5 + 1
 
procent = n5 * 100 / N
afișează procent
Programul C care implementează algoritmul descris mai sus va fi:

#include <stdio.h>
 
int main() {
    int N, v[100], i, n5;
    float procent;
 
    /* Citim numarul de note ce vor fi introduse de la tastatura */
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        /* Citim a i-a nota */
        scanf("%d", &v[i]);
    }
 
    /* In n5 vom numara cate note mai mici ca 5 au fost citite. Initial sunt 0*/
    n5 = 0;
 
    /* Parcurgem vectorul de note... */
    for (i = 0; i < N; i++) {
        /* ... si daca gasim o nota mai mica decat 5 ... */
        if (v[i] < 5) {
            /* ... vom incrementa n5. */
            n5++;
        }
    }
 
    /* Aplicam formula de calculare a procentului: cum n5, 100 si N sunt de tip
     * int, daca nu am converti una dintre ele la float, s-ar face impartire 
     * intreaga.
     */
    procent = (float)n5 * 100 / N;
 
    printf("%.3f", procent);
 
    return 0;
}
Problema 2

Să se scrie un program care citeşte un şir de numere (pozitive şi negative) şi afişează numărul de numere negative şi numărul de numere pozitive din şirul citit.

Date de intrare

Pe prima linie se va afla un număr natural N, care reprezintă dimensiunea şirului de numere. Pe a doua linie, şirul de numere pozitive şi negative.

Date de ieşire

Se vor afişa, pe aceeaşi linie, cu un spaţiu între ele, cele 2 numere naturale reprezentând numărul numerelor negative şi pozitive din şirul citit.

Restrictii si Precizari

0 ≤ N ≤ 100
Numarul 0 se consideră pozitiv.
Exemplu

Intrare	Ieşire
5 
-2 3 5 -7 11	2 3
5 
2 3 4 4 5	0 5
Problema 3

Să se scrie un program care determină valoarea minimă dintre toate valorile maxime pe liniile unei matrice de numere intregi (punct in “şa”).

Date de intrare

Pe prima linie se vor afla două numere naturale, N şi M, ce reprezintă dimensiunile matricei (numărul de linii şi numărul de coloane). Începând cu a doua linie, vor fi câte N linii, fiecare a câte M numere întregi.

Date de ieşire

Se va afişa numărul întreg ce reprezintă punctul “şa”.

Restrictii

0 < N, M ≤ 100
Exemplu

Intrare	Ieşire
4 4 
2 17 1 4 
9 2 11 3 
1 8 5 6 
8 9 3 4	8
Problema 4

Se citesc 2 matrice A (m x n) şi B (p x q) de la tastatură. Afişaţi matricea C = A * B sau mesajul imposibil.

C(i, j) = ∑ A(i, k) * B(k, j), 1 ≤ i ≤ m, 1 ≤ k ≤ n = p, 1 ≤ j ≤ q

Date de intrare

Pe prima linie se vor afla două numere naturale, m şi n, ce reprezintă dimensiunile matricei A. Urmează m linii a câte n numere întregi, ce reprezintă elementele matricei A. Pe o nouă linie vor fi alte două numere naturale, p şi q, ce reprezintă dimensiunile matricei B. Urmează p linii a câte q numere întregi, ce reprezintă elementele matricei B.

Date de ieşire

Pe prima linie se vor afişa două numere naturale reprezentând dimensiunile matricei C, separate printr-un spaţiu. Urmează afişarea elementelor matricei C. În cazul în care nu se poate efectua A * B, se va afişa o singură linie cu mesajul imposibil.

Restrictii

0 < n, m, p, q ≤ 100
Toate numerele din fisierele de intrare sunt cuprinse intre -1000 si 1000.
Exemplu

Intrare	Ieşire
2 1 
1 
2 

1 3 
1 2 3	2 3 
1 2 3 
2 4 6
2 2 
1 0 
0 1 

1 2 
5 5	imposibil
Problema 5

Program pentru interclasarea a doi vectori ordonaţi într-un singur vector ordonat.

Hint: Veţi parcurge cei 2 vectori in paralel şi veţi construi un nou vector, la care veţi adăuga, pe rând, câte un element din primul sau din al doilea vector (în funcţie de care dintre ele este mai mic).
Date de intrare

Pe prima linie se va afla un număr natural N1 ce reprezintă dimensiunea primului vector. Pe a doua linie se vor afla numere întregi ce reprezintă elementele primului vector. Pe a treia linie se va afla un număr natural N2 ce reprezintă dimensiunea celui de-al doilea vector. Pe a patra linie se vor afla numere întregi ce reprezintă elementele celui de-al doilea vector.

Date de ieşire

Se vor afişa elementele vectorului obţinut prin interclasarea celor doi vectori, separate între ele printr-un spaţiu.

Restrictii

0 < N1, N2 ≤ 1000
Exemplu

Intrare	Ieşire
4 
-3 5 9 12 
7 
1 3 5 6 7 13 17	-3 1 3 5 5 6 7 9 12 13 17
Problema 6

Se citeşte o matrice pătratică A de la tastatură. Afişati toate elementele de sub diagonala secundară, pe coloane.

Date de intrare

Pe prima linie se va afla un număr natural, N, ce reprezintă numărul de linii si numărul de coloane ale matricei. Urmează N linii a câte N numere întregi, ce reprezintă elementele matricei.

Date de ieşire

Se vor afişa pe o linie, separate printr-un spaţiu, toate elementele de sub diagonala secundară.

Restrictii

0 < N ≤ 100
Exemplu

Intrare	Ieşire
4 
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16	14 11 15 8 12 16
Problema 7

Program pentru afişarea celei mai lungi secvenţe de elemente consecutive ordonate crescător dintr-un vector de numere naturale.

Date de intrare

Pe prima linie se va afla un număr natural, N, ce reprezintă dimensiunea vectorului. Pe a doua linie se vor afla N numere întregi ce reprezintă elementele vectorului.

Date de ieşire

Se va afişa pe o linie secvenţa de elemente consective ordonate crescător, elementele fiind despărţite între ele printr-un spaţiu.

Restrictii

0 < N ≤ 100
Dacă există mai multe secvente crescătoare de lungime maximală, se va afişa cea care începe de la poziţia cea mai din stânga
O secvenţă de numere (i,j) este crescătoare dacă şi numai dacă s(k) ≤ s(k+1), oricare ar fi i ≤ k ≤ j-1.
Exemplu

Intrare	Ieşire
9 
5 3 6 2 4 6 8 4 1	2 4 6 8
Problema 8

Program pentru afişarea secvenţei de elemente consecutive de sumă maximă dintr-un vector.

Date de intrare

Pe prima linie se va afla un număr natural, N, ce reprezintă dimensiunea vectorului. Pe a doua linie se vor afla N numere întregi ce reprezintă elementele vectorului.

Date de ieşire

Se va afişa pe o linie secvenţa de elemente consecutive de sumă maximă din vectorul dat, separînd elementele între ele printr-un spaţiu.

Restrictii

0 < N ≤ 100
Elementele vectorului au valori cuprinde între -10.000 şi 10.000
Dacă există mai multe secvente de elemente de sumă maximă, se va afisa cea care începe pe o poziţie cât mai din stânga.
Dacă în continuare există mai multe secvente de elemente de sumă maximă care încep pe aceeaşi poziţie, se va alege cea mai scurtă dintre ele.
Exemplu

Intrare	Ieşire
12 
5 0 -1 -4 2 8 3 -1 2 -5 -8 4	5 0 -1 -4 2 8 3 -1 2
Explicatii

Secventa 2 8 3 -1 2 are de asemenea suma maximă, dar vom alege ca răspuns secvenţa care începe cel mai din stânga.

Problema 9

Scrieţi un program care citeşte un şir de numere şi verifică dacă acest şir este ordonat crescator sau ordonat descrescator sau nu este ordonat sau este un şir constant. Se afişează un mesaj: “crescator” , “descrescator”, “neordonat”, “constant” .

Date de intrare

Pe prima linie se va afla un număr natural, N, ce reprezintă dimensiunea vectorului. Pe a doua linie se vor afla N numere întregi ce reprezintă elementele matricei.

Date de ieşire

Se va afişa mesajul specific.

Restrictii

0 < N ≤ 100
Exemplu

Intrare	Ieşire
5 
2 3 5 7 11	crescator
4 
11 2 2 5	neordonat
3 
3 3 3	constant
Problema 10

Scrieţi un program care citeşte n numere reale X şi m + 1 numere întregi A şi afişează numărul de valori din X situat în fiecare din cele m intervale deschise delimitate de valorile din A.

Date de intrare

Pe prima linie se va afla numărul natural n. Pe a doua linie vor fi n numere reale. Pe a patra linie se va afla numărul natural m. Pe a cincea linie vor fi m numere întregi.

Date de ieşire

Se va afişa numărul de valori din X situat în fiecare din cele m - 1 intervale deschise delimitate de valorile din A sau mesajul Error dacă valorile din şirul A nu sunt sorte în ordine scrict crescătoare.

Restricţii

Se verifică dacă valorile A sunt introduse în ordine crescatoare şi în caz contrar programul se opreşte
0 ≤ n ≤ 100
2 ≤ m ≤ 1000
Exemplu

Intrare	Ieşire
7 
5.2 4.1 1.1 5 5.9 6.7 3.14 

4 
2 3 5 7	0 2 3
7 
5.2 4.1 1.1 5 5.9 6.7 3.14 

4 
2 5 3 7	Error
Explicaţie

Nu sunt numere incluse în intervalul (2, 3).

În (3, 5) sunt incluse 3.14, 4.1.

În (5, 7) sunt incluse 5.2, 5.9, 6.7.

Problema 11

Program pentru calculul valorii unui polinom cu coeficienţi daţi, prin mai multe metode cu următoarea numerotare a coeficienţilor:

P(x) = c0 * xn + c1 * xn - 1 + … + cn - 1 * x + cn.

Ca suma de termeni calculaţi separat (cu funcţia pow, din math.h)
Printr-o relaţie de recurenţă de forma: P(x, k) = P(x, k - 1) * x + c[k] şi P(x, 0) = c[0]]
De exemplu: pentru n = 3 şi c = { 1, 2, 3, 4 }, corespunzătoare polinomului P(x) = x3 + 2 * x2 + 3 * x + 4, se poate scrie P(x) = x * (x * (x * 1 + 2) + 3) + 4

Date de intrare

Pe prima linie se vor afla două numere: un număr real x şi un număr natural n ce reprezintă gradul polinomului. Pe a doua linie, separate printr-un spaţiu, n+1 numere întregi ce reprezintă coeficienţii polinomului ( c[0], c[1], …, c[n] ).

Date de ieşire

Se va afişa valoarea polinomului cu o precizie de 2 zecimale.

Restrictii si precizari

0 < n ≤ 50
Pentru reprezentarea numerelor reale se va folosi tipul double
Exemplu

Intrare	Ieşire
0.5 3 
1 2 3 4	6.12
Problema 12

Fie un vector de numere întregi (iniţial toate având valoarea 0) de lungime N. Se citesc de la tastatură un set de M tripleţi de forma B E V fiecare având urmatoarea semnificaţie : toate elementele din vector ale căror poziţii (indexate de la 0) sunt cuprinse între B şi E inclusiv vor fi modificate prin adunare cu V.

Afişati vectorul obţinut în urma aplicării celor M operaţii.

Date de intrare

Pe prima linie se vor afla două numere naturale: N, ce reprezintă lungimea vectorului şi M, ce reprezintă numărul de tripleţi ce vor fi citiţi de la tastatură. Pe următoarele M linii, câte trei numere naturale, B, E şi V, separate prin câte un spaţiu.

Date de ieşire

Se vor afişa pe o linie elementele vectorului obţinut în urma aplicării celor M operaţii, separate prin câte un spaţiu.

Restrictii si Precizari

0 < B(i) ≤ E(i) ≤ N ≤ 1.000.000
0 < M ≤ 100.000
-10.000 ≤ V(i) ≤ 10.000
Exemplu

Intrare	Ieşire
5 3 
1 2 3 
2 4 -1 
0 1 2	2 5 2 -1 -1
Explicaţie

Iniţial: 0 0 0 0 0

După (1 2 3): 0 3 3 0 0

După (2 4 -1): 0 3 2 -1 -1

După (0 1 2): 2 5 2 -1 -1