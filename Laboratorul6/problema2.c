//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
#include <math.h>

void unghiuri1(float *l, float *u){
    u[0]=acos((l[2]*l[2] + l[1]*l[1] - l[0]*l[0])/(2*l[1]*l[2]))*180/M_PI;
    u[1]=acos((l[0]*l[0] + l[2]*l[2] - l[1]*l[1])/(2*l[0]*l[2]))*180/M_PI;
    u[2]=acos((l[0]*l[0] + l[1]*l[1] - l[2]*l[2])/(2*l[0]*l[1]))*180/M_PI;
}

void unghiuri2(float x, float y, float z, float *u1, float *u2, float *u3){
    *u1=acos((y*y + z*z - x*x)/(2*y*z))*180/M_PI;
    *u2=acos((x*x + z*z - y*y)/(2*x*z))*180/M_PI;
    *u3=acos((x*x + y*y - z*z)/(2*x*y))*180/M_PI;

}

int main()
{
    
    float x,y,z ;
    float u1, u2, u3;
    scanf("%f%f%f",&x,&y,&z);
    float l[3]={x,y,z},u[3]={0};

    unghiuri1(l,u);
    unghiuri2(x,y,z,&u1,&u2,&u3);

    for(int i=0;i<3;i++)
        printf("%f ",u[i]);
    printf("\n");

    printf("%f %f %f \n",u1,u2,u3);

    return 0;
}