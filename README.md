# Programarea Calculatoarelor si Limbaje de Programare 1 - LABORATOR

## Cuprins:

5. [Definire și utilizare funcții](Laboratorul5/README.md)
6. [Funcții cu vectori](Laboratorul6/README.md)
7. [Functii cu pointeri; Siruri de caractere](Laboratorul7/README.md)
8. [Alocare Dinamica](Laboratorul8/README.md)
9. [Structuri - Enumerări - Uniuni](Laboratorul9/README.md)
10. [Pointeri la funcţii. Operatori pe biţi](Laboratorul10/README.md)
11. [Laboratorul 11. Fişiere text. Argumente în linia de comandă](Laboratorul11/README.md)
12. [Laboratorul 12. Introducere despre fişierele binare. Comparaţie cu fişierele text](Laboratorul12/README.md)


## Instructiuni folosire repository:

> NU DATI PUSH NICIODATA PE MAIN!

Pentru a verifica branchul pe care sunteti folositi comanda `git branch`
Pentru a schimba branchul folositi comanda `git checkout BRANCH_NAME`
Pentru a actualiza repository-ul folositi comanda `git pull` in branchul `main` si apoi folositi comanda `git merge main` din BRANCHUL VOSTRU!

Pentru a adauga fisiere in repositoryul remote folositi comenzile:

> consideram ca sunteti in folderul de baza PCLP1

```bash
cd LaboratorulX
make clean
cd ..
git add *
git commit -m "LaboratorulX"
git push
```

> ASIGURATI-VA CA BRANCHUL CURENT ESTE AL VOSTRU!

> NU SCRIETI IN REPOSITORY INTRE LABORATOARE!

In caz de erori la upload, in general cel mai usor mod de a le remedia este sa salvati copii ale modifiarilor facute in alt folder si sa redescarcati repository-ul. In cazul in care nu functioneaza ma strigati.

## Informatii generale
  
In fiecare folder `LaboratorulX` aveti:
  - cate un fisier .c pentru fiecare problema
  - un fisier .md cu cerintele problemelor
  - un fisier `Makefile` pentru compilarea mai rapida a surselor

Penrtu a compila prin makefile folositi comenzile:

```bash
make
```

> Compileaza toate sursele

```bash
make TARGET=problemaX
```

> Compileaza sursa specificata, fara estensis .c

```bash
make run TARGET=problemaX
```

> Compileaza si ruleaza sursa specificata 

```bash
make clean
```

> Sterge toate fisierele executabile (sau care nu au extensii cu exceptia lui Makefile)
