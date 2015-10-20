/* go go Accepted*/
#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
#define EPS 1e-9
#define PI acos(-1.0)

int main() {
	//input;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		double r=n/5.0;
		double h=(6*n)/10.0;
		printf("%.2f %.2f\n",r*r*PI,h*n-r*r*PI);

	}
	return 0;
}
