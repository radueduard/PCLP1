//
// Created by Eduard Andrei Radu on 09.11.2022.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct multime {
    unsigned char a;
}multime;
void init(multime *m)
{
    m->a = 0;
}
void add(multime *m, int x)
{
    m->a = m->a | (1 << x);
}
void del(multime *m, int x)
{
  m->a = m->a & ~(1 << x);
}
void print(multime *m)
{
   printf("%u\n", m->a);
}
int contains(multime *m, int x)
{
    return m->a & (1 << x);
}
int main()
{
    multime m;
    init(&m);
    add(&m, 0);
    add(&m, 1);
    add(&m, 5);
    add(&m, 6);
    print(&m);
    return 0;
}