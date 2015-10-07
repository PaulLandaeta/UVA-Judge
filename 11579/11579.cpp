/* go go Accepted*/
#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
#define EPS 1e-9
#define PI acos(-1.0)

double DEG_to_RAD(double d) { return d * PI / 180.0; }

double RAD_to_DEG(double r) { return r * 180.0 / PI; }

struct point { double x, y;   // only used if more precision is needed
  point() { x = y = 0.0; }                      // default constructor
  point(double _x, double _y) : x(_x), y(_y) {} };      // constructor

double dist(point p1, point p2) {
  return hypot(p1.x - p2.x, p1.y - p2.y); }

double perimeter(double ab, double bc, double ca) {
  return ab + bc + ca; }

double perimeter(point a, point b, point c) {
  return dist(a, b) + dist(b, c) + dist(c, a); }

double area(double ab, double bc, double ca) {
  // Heron's formula, split sqrt(a * b) into sqrt(a) * sqrt(b); in implementation
  double s = 0.5 * perimeter(ab, bc, ca);
  return sqrt(s) * sqrt(s - ab) * sqrt(s - bc) * sqrt(s - ca); }
 bool canFormTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a); }
int main() {
	input;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		std::vector<double> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		sort(v.rbegin(),v.rend());
		double sol=0.0;
		for (int i = 0; i < n-2; ++i)
		{
			if(canFormTriangle(v[i],v[i+1],v[i+2])){
				sol=max(sol,area(v[i],v[i+1],v[i+2]));
				break;
			}
		}
		printf("%.2lf\n",sol );

	}
	return 0;
}
