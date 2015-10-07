/* go go Accepted*/
#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
#define EPS 1e-9
#define PI acos(-1.0)

int main() {
	//input;
	double r,n;
	while(scanf("%lf %lf",&r,&n)==2){
    double ap=(n*r*r*sin(2*PI/n))/2;
    printf("%.3lf\n",ap);
	}

	return 0;
}
