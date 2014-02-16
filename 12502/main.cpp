/*Autor: Paul Wilker Landaeta Flores
*Juez: UVA-12149
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
    int a,b,c,n,e,d;
    scanf("%d",&n);
        while(n--)
        {
           scanf("%d%d%d",&a,&b,&c);
           e=c*(a+(a-b))/(a+b);
           if(e<=0)
           printf("0\n");
           else
           printf("%d\n",e);
        }
    return 0;
}
