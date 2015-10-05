#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

using namespace std;
long long m=1000000007;
#define Vector Point
 #define EPS 1e-8
#define PI acos(-1)

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
bool onSegment(const Point &A, const Point &B, const Point &P)
{
    return abs(area(A, B, P)) < EPS &&
            P.x >= min(A.x, B.x) && P.x <= max(A.x, B.x) &&
            P.y >= min(A.y, B.y) && P.y <= max(A.y, B.y);
}

int main() {
  input;
  double a,b;
  while(cin>>a>>b){
      Point tree1(a,b);
      cin>>a>>b;
      Point tree2(a,b);
          double midx=(tree1.x+tree2.x)/2.0;
          double midy=(tree1.y+tree2.y)/2.0;
          double disx=midx-tree1.x;
          double disy=midy-tree1.y;
          Point tree3(midx+disy,midy-disx);
          Point tree4(midx-disy,midy+disx);
          printf("%lf %lf %lf %lf\n",tree3.x,tree3.y,tree4.x,tree4.y);
  
  }
  return 0;
}