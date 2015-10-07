/* go go Accepted*/
#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
#define EPS 1e-9
#define PI acos(-1.0)
int main() {
//	input;
	double l,w,h,grados;
	while(scanf("%lf %lf %lf %lf",&l,&w,&h,&grados)==4){
		double h1=(l*(sin(grados*PI/180.0)))/(sin((90-grados)*PI/180.0));
		if(h1<=h){
			printf("%.3lf mL\n", (h*w*l)-(h1*l*w)/2.0);
		}
		else{
			double l1=(h*(sin((90-grados)*PI/180.0)))/(sin(grados*PI/180.0));
			printf("%.3lf mL\n", (h*l1*w)/2.0);
		}
	}
	return 0;
}
