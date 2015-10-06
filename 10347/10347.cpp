/* go go Accepted*/
#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
#define EPS 1e-8
#define PI acos(-1)
#define Vector Point
 
string line;
int main(void){
  input;
    double m1,m2,m3;
    double sol,s;
    while(scanf("%lf %lf %lf",&m1,&m2,&m3)==3){
        s=(m1+m2+m3)*0.5;
        sol=(4.0/3.0)*sqrt(s*(s-m1)*(s-m2)*(s-m3));
        if(sol>0.0){
             printf("%.3f\n",sol);
        }    
        else
            printf("%.3f\n",-1.0);
            }
    return 0;
}
