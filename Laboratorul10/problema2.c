#include <stdio.h>
#include <stdlib.h>
/*
struct multime
{
    unsigned char a;
};

void init (struct multime *m)
{
    m->a = 0;
}

void add (struct multime *m, int x)
{
    m->a = m->a | (1 << x);
}

void del (struct multime *m, int x)
{
    m->a = m->a & ( ~(1 << x) );
}

void print (struct multime *m)
{
    unsigned int aux = 1;
    for (int i = 0; i < 8; i++)
    {
        if (aux & m->a) printf("%d ", i);
        aux = aux << 1;
    }
    printf("\n");
}

int contains (struct multime *m, int x)
{
    if ( (1 << x) & m->a ) return 1;
    else return 0;
}
*/

struct multime
{
    unsigned int n;
    unsigned char *a;
};

void init(struct multime *m)
{
    m->n = 8;
    m->a = (unsigned char *) malloc (1);
    m->a[0] = 0;
}

void add (struct multime *m, int x)
{
    if (x >= m->n)
    {
        int aux = x / 8;
        m->a = (unsigned char *) realloc(m->a, aux + 1);
        for(int i = m->n / 8; i <= x / 8; i++)
            m->a[i] = 0;
        m->n = (aux + 1) * 8;
        unsigned char unu = 1;
        if((m->n - x) % 8)
            m->a[aux] = m->a[aux] | unu << (8 - m->n + x);
        else
            m->a[aux] = m->a[aux] | unu;
    }
    else
    {
        int aux = x / 8;
        unsigned char unu = 1;
        if(x % 8)
        {
            if(x > 8)
                m->a[aux] = m->a[aux] | (unu << (x % 8));
            else
                m->a[aux] = m->a[aux] | (unu << x);
        }
        else
            m->a[aux] = m->a[aux] | unu;
    }
}

int contains(struct multime *m, int x)
{
    unsigned char unu = 1;
    if(x >= m->n) return 0;
    int aux = x / 8;
    if(x % 8)
    {
        if(x > 8)
        {
            if ((unu << (x % 8)) & m->a[aux]) return 1;
            else return 0;
        }
        else
        {
            if ((unu << x) & m->a[aux]) return 1;
            else return 0;
        }
    }
    else
    {
        if(m->a[aux] & unu) return 1;
        else return 0;
    }
}

void del (struct multime *m, int x)
{
    int aux = x / 8;
    unsigned char unu = 1;
    if(x % 8)
    {
        if(x > 8)
            m->a[aux] = m->a[aux] & (~(unu << (x % 8)));
        else
            m->a[aux] = m->a[aux] & (~(unu << x));
    }
    else
        m->a[aux] = m->a[aux] & (~ unu);
}

void print(struct multime *m)
{
    int aux = 0;
    for(int i = 0; i < m->n / 8; i++) {
        unsigned  char t = 1;
        for (int j = 0; j < 8; j++) {
            if(t & m->a[i]) printf("%d ", aux);
            aux++;
            t = t << 1;
        }
    }
    printf("\n");
}

int main() {

    int n, x;
    char ch;
    struct multime m;
    init(&m);
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%c", &ch);
        if(ch == 'A')
        {
            scanf("%d", &x);
            add(&m, x);
        }
        if(ch == 'D')
        {
            scanf("%d", &x);
            del(&m, x);
        }
        if(ch == 'C')
        {
            scanf("%d", &x);
            if(contains(&m, x) == 1) printf("DA\n");
            else printf("NU\n");
        }
        if(ch == 'P')
        {
            print(&m);
        }
        if(i < n - 1)
            scanf("\n");
    }

/*
    struct multime num;

    init (&num);
    printf("%d\n", num.a);

    add(&num, 5);
    printf("%d\n", num.a);

    num.a = 255;
    del (&num, 3);
    printf("%d\n", num.a);

    num.a = 44;
    print(&num);

    printf("%d", contains(&num, 4));
    */
    return 0;
}