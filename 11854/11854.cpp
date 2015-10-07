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
	
int a,b,c;
	while(cin>>a>>b>>c){
		
		if(a+b+c==0)
			break;
		if(canFormTriangle(a,b,c)){
			if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a )
				printf("right\n");	
			else
			printf("wrong\n");
		}
		else
			printf("wrong\n");
	}
	return 0;
}
