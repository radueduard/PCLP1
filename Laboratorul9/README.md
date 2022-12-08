# Laborator 09 - Structuri - Enumerări - Uniuni

## **Problema 1 (rezolvată)**

Scrieți un program în care să se definească o structură `Punct` ce are ca membrii coordonatele `x` și `y`. Să se citească de la tastatură coordonatele pentru un `Punct p` și să se afișeze sub forma (x,y). Observați folosirea structurilor (definire, accesare membrii).

## ***Date de intrare:***

- Doua numere reprezentand coordonatele punctului

## ***Date de ieşire:***

- Punctul in formatul din exemplul oferit

## ***Exemplu:***

| Intrare    | Ieşire      |
|:-----------|:------------|
| 8.6<br>3.5 | (8.60,3.50) |

## ***Rezolvare:***

Programul C care implementează cerinţa problemei de mai sus va fi:

```c
#include <stdio.h>
 
typedef struct {
     float x, y;
} Punct;
 
int main ()
{
     Punct p;
 
     printf("Introduceti x: ");
     scanf("%f", &p.x);
     printf("Introduceti y: ");
     scanf("%f", &p.y);
 
     printf("(%.2f,%.2f)\n", p.x, p.y);
 
     return 0;
}
```

## ***Implementare:***
[problema1.c](./problema1.c)

## **Problema 2**

Moduri în care timpul poate fi exprimat într-un program C:

- Printr-un întreg lung (tip de date time_t, echivalent cu long int), ce reprezintă numărul de secunde față de ora 0 din 1 ianuarie 1970.
- Printr-o structură cu numele tm ce conține:

```c
struct tm { // definita in time.h
    int tm_sec,tm_min, tm_hour; // sec (0-59), min (0-59), ora (0-23)
    int tm_mday, tm_mon, tm_year; // zi (0-31), luna (0-11), an (dupa 1900)
    int tm_wday; // ziua din saptamana (0-6)
    int tm_yday; // ziua din an (0-365)
    int tm_isdst; // +1 Daylight Savings Time, 0 No DST, -1 don't know
};
```

Pentru a facilita lucrul cu date ce reprezintă timpul sunt declarate în biblioteca time.h mai multe funcții. Câteva funcții din time.h:

- time_t time(time_t*) returnează ora curentă (ca număr de secunde); această valoare se pune și la adresa trimisă ca parametru (excepție când se apelează time(NULL) - atunci se va întoarce timpul doar ca rezultat al funcției)
- struct tm* localtime(const time_t*) transformă o dată din format time_t în struct tm; funcția întoarce un pointer la o structură de tip tm
- char* asctime(const struct tm*) transformă din struct tm într-un șir de caractere ce va reprezenta data în format human-readable
- char* ctime(const time_t*) transformă din time_t într-un șir de caractere ce va reprezenta data în format human-readable
Să se scrie un program pentru afișarea orei și datei folosind funcțiile din time.h descrise mai sus.

## ***Implementare:***
[problema2.c](./problema2.c)

## **Problema 3**

Să se scrie și să se verifice o funcție pentru transformarea orei din struct tm în șir de caractere (se vor afișa oră, minut, secundă) :

```c
char* timestr(struct tm t, char* time);
```

Rezultatul funcției este același cu al doilea argument și reprezintă adresa unde se depune șirul de caractere rezultat.

## ***Implementare:***
[problema3.c](./problema3.c)

## **Problema 4:**

Să se definească o structură pentru un vector struct vector de întregi alocat dinamic care conține:

```c
int* v      //  adresa vector
int cap     // dimensiune alocata (maxima)
int n       // dimensiune efectiva (număr de întregi stocați)
```
Să se scrie funcții pentru:

- inițializarea unui vector (cu o alocare initiala de memorie): void init_vector(vector *a, int nr)
- adăugarea unui nou element la vector (cu o eventuală realocare a vectorului): void adauga_vector(vector *a, int n)
- afișarea unui vector: void scrie_vector(vector a)
  
Testaţi programul adăugând pe rând, şi afişând vectorul după fiecare adăugare, numerele de la 0 la 100.

## ***Implementare:***
[problema4.c](./problema4.c)

## **Problema 5**

Să se definească o structură pentru un număr complex cu componente reale (de tip float) şi funcţii pentru operatorii aritmetici cu numere complexe:

- adunarea: `complex adunare(complex a, complex b)`
- scăderea: `complex scadere(complex a, complex b)`
- înmulţirea: `complex inmultire(complex a, complex b)`
- ridicarea la o puterea întreagă: `complex putere(complex a, int putere)`
- afişarea sub forma (re,im): `void scrie(complex a)`
  
Folosind funcţiile anterioare, să se scrie un program pentru calulul valorii unui polinom de variabilă complexă cu coeficienţi reali.

## ***Implementare:***
[problema5.c](./problema5.c)

## **Problema 6**

Să se scrie un program pentru citirea unor cuvinte și afișarea numărului de apariții al fiecărui cuvânt.

Problema se va rezolva în două variante diferite:

- Se va folosi un vector de char* pentru cuvinte (char **) și un vector de numere întregi. Cei doi vectori se alocă și extind dinamic (se realocă dacă este nevoie).
- Se va defini o structură Pereche ce conține un cuvânt și numărul lui de apariții și un vector de astfel de perechi. Vectorul se alocă și se extinde dinamic.
  
## **Exemplu:**

| Intrare                            | Ieşire                   |
|:-----------------------------------|:-------------------------|
| 6<br>unu doi<br>trei doi trei trei | unu 1<br>doi 2<br>trei 3 |

## ***Implementare:***
[problema6.c](./problema6.c)
