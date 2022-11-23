//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
#include <math.h>
void unghiuri1( double l[], double u[]){
    u[0]=acos((l[2]*l[2]+l[1]*l[1]-l[0]*l[0])/(2*l[1]*l[2]))*180/M_PI;
    u[1]=acos((l[0]*l[0]+l[2]*l[2]-l[1]*l[1])/(2*l[0]*l[2]))*180/M_PI;
    u[2]=acos((l[0]*l[0]+l[1]*l[1]-l[2]*l[2])/(2*l[0]*l[1]))*180/M_PI;
    

}
void unghiuri2( double x, double y, double z,double *u1,double*u2,double *u3){
    *u1=acos((y*y+z*z-x*x)/(2*y*z))*180/M_PI;
    *u2=acos((x*x+z*z-y*y)/(2*x*z))*180/M_PI;
    *u3=acos((x*x+y*y-z*z)/(2*x*y))*180/M_PI;

}


int main()
{
    double x,y,z,u1,u2,u3;
    double u[100],l[100];
    int i,j,n,m;
    for(j=0;j<3;j++)
        scanf("%lf", &l[i]);
    x=l[0];
    y=l[1];
    z=l[2];
    unghiuri1(l,u);
    for(i=0;i<3;i++){
        printf("%lf ",u[i]);
    }
    printf("\n");
    unghiuri2(x,y,z,&u1,&u2,&u3);
    printf("%lf %lf %lf",u1,u2,u3);
    return 0;
}