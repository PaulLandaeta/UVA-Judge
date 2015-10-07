/* go go Accepted*/
#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
#define EPS 1e-9
#define PI acos(-1.0)
bool canFormTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a); }


int main() {
	//input;
	int t;
	cin>>t;

	while(t--){
	int a,b,c;
	cin>>a>>b>>c;
			
		if(canFormTriangle(a,b,c)){
			printf("OK\n");
		}
		else
			printf("Wrong!!\n");
	}
	return 0;
}
