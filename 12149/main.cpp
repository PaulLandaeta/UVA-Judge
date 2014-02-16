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
    int n;
    while(cin>>n && n)
    {
        long long sol=0;
        while(n>0)
        {
            sol=sol+n*n;
            n--;
        }
        cout<<sol<<endl;
    }
    return 0;
}
