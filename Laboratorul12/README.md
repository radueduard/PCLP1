# Laboratorul 12. Introducere despre fişierele binare. Comparaţie cu fişierele text

În acest laborator veţi învăţa să:

- Folosiţi corect fişiere binare.
- Folosiţi funcţii de citire şi scriere la nivel de octet.
- Creaţi proiecte şi să compilaţi executabile din mai multe surse (introducere)

## **Problema 1**

Să se definească o structură `Produs` cu următoarele date despre un produs:

- nume_produs - un şir de maxim 20 caractere
- cantitate - un număr întreg
- pret_produs - un număr real

Să se implementeze definiţia structurii într-un fişier numit `Produs.h` şi o funcţie `main()`, într-un fişier numit `main.c`. Funcţia main va primi argumente din linia de comandă şi va trebui să importe tipul de dată `Produs` din fişierul extern (folosiţi directiva `#include`).

 > ATENŢIE! Definiţia tipului de date, includerea bibliotecilor precum şi antetele funcţiilor care se vor defini ulterior vor fi grupate în fişierul header Produs.h, iar implementarea efectiva a functiilor in fisierul main.c!

## **Problema 2 (9-11 linii)**

Scrieţi o funcţie pentru crearea unui fişier binar care să conţină 100 de produse cu date generate aleator astfel:

- Numele produsului este de forma `ProdusX` unde X este un număr generat aleator (convertit în şir de caractere)
- Cantitatea produsului este X % 100
- Preţul produsului se obţine cu relaţia X ⇐ 100 ? X : X % 100
  
În fişier se va scrie câte un articol de tip Produs cu ajutorul funcţiei `fwrite()` (nu pe componente).

## Hints:

Folosiţi funcţia `rand()` pentru a genera un număr aleator între 0 şi `RAND_MAX`
Puteţi transforma uşor un întreg într-un şir folosind:
```c
 int sprintf(char *str, const char *format, ...) 
 ```
Functia poate avea urmatorul antet:
```c
void creare_fisier(char* nume_fisier); 
```

## **Problema 3 (7-10 linii)**

Scrieţi o funcţie pentru afişarea pe ecran a fişierului creat anterior, câte un articol pe o linie.

Funcţia poate avea următorul antent:
```c
void afisare_ecran(char* nume_fisier); 
```

## **Problema 4 (10-12 linii)**

Scrieţi o funcţie pentru sortarea articolelor din fişier crescător după nume.

## ***Hints:***

- Aduceţi fişierul în RAM (cititi datele intr-un vector), aplicaţi sortarea şi apoi suprascrieţi fostul conţinut.
- Apelaţi funcţiile scrise anterior
- Pentru sortare puteţi folosi BubbleSort sau altă metodă de sortare!

## **Problema 5**

Scrieţi o funcţie pentru citirea unui nume de produs de la tastatură, căutarea produsului cu acel nume in fisier şi afişarea datelor despre produsul găsit. Dacă nu există un produs cu acel nume atunci se afişează un mesaj corespunzător.

## **Problema 6**

Scrieţi o funcţie pentru citirea unui nume de produs de la tastatură, căutarea produsului cu acel nume in fisier şi afişarea datelor despre produsul găsit. După afişare se introduce o linie cu alte valori pentru cele 3 câmpuri, care vor înlocui in fişier valorile corespunzatoare produsului respectiv. Dacă nu există un produs cu acel nume atunci se afişează un mesaj corespunzător. Atenţie! Nu se va suprascrie tot fişierul!

## ***Hint:***

- Pentru căutare citiţi rând pe rând produsele, iar în momentul în care ajungeţi la produsul dorit îl modificaţi direct în fişier!
  
## **Problema 7**

Completaţi următorul schelet de cod astfel încât să realizeze salvarea şi apoi restaurarea a 4 structuri care contin siruri alocate dinamic. În fişierul binar NU aveţi voie să scrieţi şi terminatorul de şir (caracterul \0). În fişier va trebui sa precedeţi fiecare şir cu 4 Bytes în care să se regăsească dimensiunea şirului stocat de la acel punct încolo.

Procesul de salvare al unui obiect într-un fişier este uneori mai complicat decât o simplă copiere. Dacă obiectul conţine membrii alocaţi dinamic, atunci nu mai este suficientă o scriere de tip “shallow” (simplă copiere), deoarece se pierde informaţia din obiectele alocate dinamic.

> ATENTIE! NU scrieţi niciodată, sub nici o formă pointeri în fişiere! Aceasta este o greşeală de logică foarte gravă!!!

De ce? Un pointer reprezintă o adresă către o zonă din memoria RAM pe care sistemul de operare o oferă procesului pe timpul rulării acestuia. Fişierele supravieţuiesc de la o rulare la alta a programului.

Astfel, la următoarea rulare, nu numai ca probabil că zona respectivă de memorie ajunge între timp în posesia altui proces, dar nici măcar datele nu mai exista fizic acolo, deoarece sunt şanse foarte mari să fi fost suprascrise între timp (memoria RAM este extrem de intens utilizată). Este foarte important să cereţi informaţii suplimentare dacă nu vă este foarte clar de ce nu ar funcţiona!

În concluzie, în astfel de cazuri, trebuie să “aplatizăm” structura, adică să scriem în fişier absolut toate datele referenţiate de aceasta prin pointeri, iar la restaurare să realocăm toată memoria şi să refacem pointerii. Procesul de salvare al unei structuri în formă binară se numeşte `serializare`, iar reconstruirea acestuia din formă binară se numeşte `deserializare`.

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
#define N 4
 
typedef struct Persoana{
        char* nume;
        char* prenume;
} Persoana;
 
void serializeaza(Persoana v[], int nrPersoane, char* fileName)
{
        FILE* f = fopen(fileName, "wb");
 
        //TODO! Adauga codul de serializare: ~10 linii
 
        fclose(f);
}
 
void deserializeaza(Persoana v[], int nrPersoane, char* fileName)
{
        FILE* f = fopen(fileName, "rb");
 
        //TODO! Adauga codul de deserializare: ~10 linii
 
        fclose(f);
}
 
int main()
{
        Persoana v[N],w[N];
        char* prenume[N] = { "Eric", "Kyle", "Stan", "Kenny" };
        char* nume[N] = { "Cartman", "Broflovski", "Marsh", "McCormick" };
        int i;
        for (i = 0; i < N; i++){
                v[i].nume = nume[i];
                v[i].prenume = prenume[i];
        }
 
        // Serializam vectorul intr-un fisier
        serializeaza(v, N, "persoane.bin");
        // Deserializam in alt vector, din acelasi fisier. Ar trebui sa obtinem aceleasi informatii.
        deserializeaza(w, N, "persoane.bin");
 
        for (i = 0; i < N; i++){
                printf("%s %s\n",w[i].prenume,w[i].nume);
        }
 
        return 0;
}
```