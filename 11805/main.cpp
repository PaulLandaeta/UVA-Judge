/*Autor: Paul Wilker Landaeta Flores
*Juez: UVA-11805
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
int main()
{
    int t;
    cin>>t;
    int caso=0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        c=c%a;
        while(c--)
        {
            if(b==a)
            {
                b=1;
            }
            else
                b++;
        }
        printf("Case %d: %d\n",++caso,b);
    }
    return 0;
}
