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
bool intersects(const Point &P1, const Point &P2, const Point &P3, const Point &P4)
{
    double A1 = area(P3, P4, P1);
    double A2 = area(P3, P4, P2);
    double A3 = area(P1, P2, P3);
    double A4 = area(P1, P2, P4);
     
    if( ((A1 > 0 && A2 < 0) || (A1 < 0 && A2 > 0)) && 
        ((A3 > 0 && A4 < 0) || (A3 < 0 && A4 > 0))) 
            return true;
     
    else if(A1 == 0 && onSegment(P3, P4, P1)) return true;
    else if(A2 == 0 && onSegment(P3, P4, P2)) return true;
    else if(A3 == 0 && onSegment(P1, P2, P3)) return true;
    else if(A4 == 0 && onSegment(P1, P2, P4)) return true;
    else return false;
}
int main() {
  input;
  int t;
  scanf("%d",&t);
  while(t--){
  	  int n;
  	  scanf("%d",&n);
  	  std::vector<Point> va(n);
  	  std::vector<Point> vb(n);
  	  for (int i = 0; i < n; ++i){	
  	  	int  x,y;
  	  	scanf("%d %d",&x,&y);
  	  		Point a=Point(x,y);	
  	  		va[i]=a;
  	  		scanf("%d %d",&x,&y);
  	  		Point b=Point(x,y);	
  	  		vb[i]=b;
  
  	  }
  	  int cont=0;
  	  std::vector<int> v(n,true);
  	  for (int i=0; i<n; i++)
  	              for (int j=i+1; j<n; j++)
  	                  if (intersects(va[i],vb[i],va[j],vb[j])) {
  	                      v[i] = v[j] = false;
  	                  }
      int Count = 0;
      for (int i=0; i<n; i++)
          if (v[i]) Count++;
      printf("%d\n", Count);
  	  
  }
  return 0;
}