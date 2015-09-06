/* go go Accepted*/
#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
#define EPS 1e-8
#define PI acos(-1)
#define Vector Point
 
struct Point
{
    double x, y;
    Point(){}
    Point(double a, double b) { x = a; y = b; }
    double mod2() { return x*x + y*y; }
    double mod()  { return sqrt(x*x + y*y); }
    double arg()  { return atan2(y, x); }
    Point ort()   { return Point(-y, x); }
    Point unit()  { double k = mod(); return Point(x/k, y/k); }
};
 
Point operator +(const Point &a, const Point &b) { return Point(a.x + b.x, a.y + b.y); }
Point operator -(const Point &a, const Point &b) { return Point(a.x - b.x, a.y - b.y); }
Point operator /(const Point &a, double k) { return Point(a.x/k, a.y/k); }
Point operator *(const Point &a, double k) { return Point(a.x*k, a.y*k); }
 
bool operator ==(const Point &a, const Point &b)
{
    return fabs(a.x - b.x) < EPS && fabs(a.y - b.y) < EPS;
}
bool operator !=(const Point &a, const Point &b)
{
    return !(a==b);
}
bool operator <(const Point &a, const Point &b)
{
    if(a.x != b.x) return a.x < b.x;
    return a.y < b.y;
}
double cross(const Vector &A, const Vector &B) { return A.x * B.y - A.y * B.x; }
double area(const Point &A, const Point &B, const Point &C) { return cross(B - A, C - A); }
bool sameLine(Point P1, Point P2, Point P3, Point P4)
{
    return area(P1, P2, P3) == 0 && area(P1, P2, P4) == 0;
}
bool isParallel(const Point &P1, const Point &P2, const Point &P3, const Point &P4)
{
    return cross(P2 - P1, P4 - P3) == 0;
}
Point lineIntersection(const Point &A, const Point &B, const Point &C, const Point &D)
{
    return A + (B - A) * (cross(C - A, D - C) / cross(B - A, D - C));
}
int main() {
	//input;
	int t;
	cin>>t;
	cout<<"INTERSECTING LINES OUTPUT"<<endl;
	while(t--){
		std::vector<Point> v(4);
		for (int i = 0; i < 4; ++i)
		{
			int x,y;
			cin>>x>>y;
			Point p(x,y);
			v[i]=p;
		}
		if(sameLine(v[0],v[1],v[2],v[3])){
			cout<<"LINE"<<endl;
		}
		else{
			if(isParallel(v[0],v[1],v[2],v[3])){
				cout<<"NONE"<<endl;
			}
			else{
				Point P=lineIntersection(v[0],v[1],v[2],v[3]);
				printf("POINT %.2f %.2f\n",P.x,P.y);
			}
		}
	}
	cout<<"END OF OUTPUT"<<endl;
	return 0;
}