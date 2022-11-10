#include <stdio.h>
#include <math.h>
double dist(int x1, int y1, int x2, int y2){
    double d,s1,s2;
    s1=x2-x1;
    s1= pow(s1,2);
    s2=y2-y1;
    s2= pow(s2,2);
    d=s1+s2;
    d= sqrt(d);
    return d;
}
int main() {
    int v[100][2],n,m,mm,i,j,p,q;
    double maxi,d;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&v[i][0],&v[i][1]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(i==0&&j==i+1){
                maxi=dist(v[i][0],v[i][1],v[j][0],v[j][1]);
                p=i;
                q=j;
            }
            if (dist(v[i][0],v[i][1],v[j][0],v[j][1])>maxi){
                maxi=dist(v[i][0],v[i][1],v[j][0],v[j][1]);
                p=i;
                q=j;
            }
        }
    }
    printf("%d %d\n%d %d\n%lf",v[p][0],v[p][1],v[q][0],v[q][1],maxi);

    return 0;
}
