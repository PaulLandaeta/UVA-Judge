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
 
//### FUNCIONES BASICAS #############################################################
 
double dist(const Point &A, const Point &B)    { return hypot(A.x - B.x, A.y - B.y); }
double cross(const Vector &A, const Vector &B) { return A.x * B.y - A.y * B.x; }
double dot(const Vector &A, const Vector &B)   { return A.x * B.x + A.y * B.y; }
double area(const Point &A, const Point &B, const Point &C) { return cross(B - A, C - A); }
double area(const vector <Point> &P)
{
    int n = P.size();
    double A = 0;
    for(int i=1; i<=n-2; i++)
        A += area(P[0], P[i], P[i+1]);
    return abs(A);
}
void f(vector <Point> P)
{
    int n = P.size(),mid=n/2; 
    double atotal=area(P);
   	int mini=100000000;
   	cout<<"area"<<atotal<<endl;
    for(int i=0;i<n;++i){
    
        int s=i;
        int j=(mid+i)%n;
        int j2=(j+1)%n;
        double A = 0;
        std::vector<Point> v;
        if(s>j2)
        	swap(s,j2);
  		for(int k=s; k<=j2; k++)
          	v.push_back(P[k]);
        cout<<i<<" "<<j<<" "<<area(v)<<endl;
    } 
}
int main() {
	input;
	int n;
	while(cin>>n){
		std::vector<Point> v(n);
		for(int i=0;i<n;i++){
			Point p;
			cin>>p.x>>p.y;
			v[i]=p;
		}
		f(v);
		cout<<"asdas"<<endl;
	}
	return 0;
}
