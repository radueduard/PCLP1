#include <stdio.h>
void count(int n, int *v,int *zero,int *poz,int *neg)
{
    int i;
    int nrz=0,poz1=0,neg1=0;
    for(i=0;i<n;i++)
        if(v[i]<0)
            neg1++;
        else
            if(v[i]>0)
                poz1++;
            else
                nrz++;
    *zero=nrz;
    *poz=poz1;
    *neg=neg1;

}
int main()
<<<<<<< HEAD
{int n,v[101],z,p,neg;
scanf("%d", &n);
int i;
for(i=0;i<n;i++)
    scanf("%d", &v[i]);
count(n,v,&z,&p,&neg);
printf(" nule : %d \n pozitive : %d \n negative : %d",z,p,neg);
   
=======
{
    printf("Hello world\n");
>>>>>>> main
    return 0;
}