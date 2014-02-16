/*Autor: Paul Wilker Landaeta Flores
*Juez: UVA-10773
*Sol: Mat- ad-hock
*Res: Aceptado
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <map>
#include <vector>
#include <list>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
using namespace std;
#define mod 1000000007
#define MAXN 1000010
#define EPS 1e-8
#define PI acos(-1)
#define Vector Point
int main(){
    double d,v,u;
    int t;
    cin>>t;
    int caso=0;
    while(t--){
        cin>>d>>v>>u;
        if(v>=u || u==0 || v==0)
            printf("Case %d: can't determine\n",++caso);
        else
        {
            double x=d/u;
            double x2=d/sqrt(u*u-v*v);
            printf("Case %d: %.3lf\n",++caso,fabs(x2-x));
        }
    }
}
