//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#define _USE_MATH_DEFINES
#include <stdio.h>
#include<math.h>

void f1(float v[],float w[]);
void f2(float x, float y, float z,float *a, float *b, float *c);

int main()
{
    float x,y,z,v[100],w[100],a,b,c;
    scanf("%f%f%f",&x,&y,&z);
    if(x<=0 || x>=360 || y<=0 || y>=360 || z<=0 || z>=360)
    {
        printf("Date invalid introduse.");
        return 0;
    }
    v[0]=x;
    v[1]=y;
    v[2]=z;
    f1(v,w);
    for(int i=0;i<3;i++)
    printf("%.3f ",w[i]);
    printf("\n");
	f2(x, y, z, &a, &b, &c);
	printf("%.3f %.3f %.3f\n", a, b, c);
}

void f1(float v[],float w[])
{
    float s = 0,ah=0,r=0;
	for (int i = 0; i < 3; i++)
		s += v[i];
	ah = sqrt((s/2) * (s/2 - v[0]) * (s/2 - v[1]) * (s/2 - v[2]));
	r = (v[0] * v[1] * v[2]) / (4 * ah);
	for (int i = 0; i < 3; i++)
		w[i] = (180 / M_PI) * asin(v[i] / (2 * r));
}

void f2(float x, float y, float z,float *a, float *b, float *c)
{
	float s = 0, ah = 0, r = 0;
	s = (x + y + z) / 2;
	ah = sqrt(s * (s - x) * (s - y) * (s - z));
	r = (x * y * z) / (4 * ah);
	*a = (180 / M_PI) * asin(x / (2 * r));
	*b = (180 / M_PI) * asin(y / (2 * r));
	*c = (180 / M_PI) * asin(z / (2 * r));
}

