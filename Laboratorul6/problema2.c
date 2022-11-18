//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
#include <math.h>
void ung1(double laturi[],double unghiuri[]){
    unghiuri[0]=acos((laturi[1]*laturi[1]+laturi[2]*laturi[2]-laturi[0]*laturi[0])/(2*laturi[1]*laturi[2]))*180/M_PI;
    unghiuri[1]=acos((laturi[0]*laturi[0]+laturi[2]*laturi[2]-laturi[1]*laturi[1])/(2*laturi[0]*laturi[2]))*180/M_PI;
    unghiuri[2]=acos((laturi[1]*laturi[1]+laturi[0]*laturi[0]-laturi[2]*laturi[2])/(2*laturi[1]*laturi[0]))*180/M_PI;

}
void ung2(double lx,double ly,double lz,double *ux,double *uy,double *uz){
    double u1,u2,u3;
    *ux=acos((ly*ly+lz*lz-lx*lx)/(2*ly*lz))*180/M_PI;
    *uy=acos((lx*lx+lz*lz-ly*ly)/(2*lx*lz))*180/M_PI;
    *uz=acos((ly*ly+lx*lx-lz*lz)/(2*ly*lx))*180/M_PI;
}
int main()
{
    int i;
    double l[3],u[3],x,y,z,ux,uy,uz;
    for(i=0;i<3;i++){
        scanf("%lf",&l[i]);
    }
    x=l[0];
    y=l[1];
    z=l[2];
    ung1(l,u);
    for(i=0;i<3;i++){
        printf("%.3lf ",u[i]);
    }
    printf("\n");
    ung2(x,y,z,&ux,&uy,&uz);
    printf("%.3lf %.3lf %.3lf",ux,uy,uz);
}