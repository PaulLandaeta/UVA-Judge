/*Autor: Paul Wilker Landaeta Flores
*Juez: UVA-10281
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

string line;
int main(void){
    int lvc = 0;
    double d = 0, speed = 0;
    while(getline(cin,line)){
        int h, m, s;
        int seconds, v;
        if(sscanf(line.c_str(), "%d:%d:%d %d", &h, &m, &s, &v) == 4){
            seconds = 3600 * h + 60 * m + s;
            d += (seconds - lvc) * speed / 3600;
            lvc = seconds;
            speed = v;
        } else {
            sscanf(line.c_str(), "%d:%d:%d", &h, &m, &s);
            seconds = 3600 * h + 60 * m + s;
            printf("%02d:%02d:%02d %.2lf km\n", h, m, s, d + (seconds - lvc) * speed / 3600);
        }
    }
    return 0;
}
