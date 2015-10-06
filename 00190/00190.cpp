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

double area(point a, point b, point c) {
  return area(dist(a, b), dist(b, c), dist(c, a)); }
int circumCircle(point p1, point p2, point p3, point &ctr, double &r){
  double a = p2.x - p1.x, b = p2.y - p1.y;
  double c = p3.x - p1.x, d = p3.y - p1.y;
  double e = a * (p1.x + p2.x) + b * (p1.y + p2.y);
  double f = c * (p1.x + p3.x) + d * (p1.y + p3.y);
  double g = 2.0 * (a * (p3.y - p2.y) - b * (p3.x - p2.x));
  if (fabs(g) < EPS) return 0;

  ctr.x = (d*e - b*f) / g;
  ctr.y = (a*f - c*e) / g;
  r = dist(p1, ctr);  
  return 1; }
int main() {
	input;
	point p1,p2,p3;
	while(cin>>p1.x>>p1.y){
		cin>>p2.x>>p2.y;
		cin>>p3.x>>p3.y;	
		point c(0,0);
		double radio;
		circumCircle(p1,p2,p3,c,radio);
		char sx='-',sy='-',sz='+';
		if(c.x<0.0)
			sx='+';
		if(c.y<0.0)
			sy='+';

		double a=-2.0*c.x;
		double b=-2.0*c.y;
		double c1=c.x*c.x+c.y*c.y-radio*radio;
//		(x - 3.000)^2 + (y + 2.000)^2 = 5.000^2
		printf("(x %c %.3lf)^2 + (y %c %.3lf)^2 = %.3lf^2\n",sx,c.x<0.0?c.x*-1.0:c.x,sy,c.y<0.0?c.y*-1.0:c.y,radio);
		sx='+',sy='+';
		if(a<0.0)
			sx='-';
		if(b<0.0)
			sy='-';
		if(c1<0.0)
			sz='-';
		//x^2 + y^2 - 7.842x - 4.895y - 7.895 = 0
		printf("x^2 + y^2 %c %.3lfx %c %.3lfy %c %.3lf = 0\n",sx,a<0.0?a*-1.0:a,sy,b<0.0?b*-1.0:b,sz,c1<0.0?c1*-1.0:c1);
		printf("\n");
	}

	return 0;
}
