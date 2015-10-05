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
 
struct vec{
    double x,y;
    vec(double _x,double _y):x(_x),y(_y){};
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
vec scale(vec v,double s){
    return vec(v.x*s,v.y*s);
}
Point translate(Point p,vec v){
    return Point(p.x+v.x,p.y+v.y);
}
double dist(Point a,Point b){
    return hypot(a.x-b.x,a.y-b.y);
}
vec toVec(Point a,Point b){
    return vec(b.x-a.x,b.y-a.y);
}
double dot(vec a,vec b){return a.x*b.x+a.y*b.y;}
double norm_sq(vec v){return v.x*v.x+v.y*v.y;}
double distToLine(Point p,Point a,Point b,Point &c){
    vec ap=toVec(a,p),ab=toVec(a,b);
    double u=dot(ap,ab)/norm_sq(ab);
    c=translate(a,scale(ab,u));
    return dist(p,c);
}
double distToLineSegment(Point p,Point a,Point b,Point &c){
    vec ap=toVec(a,p),ab=toVec(a,b);
    double u=dot(ap,ab)/norm_sq(ab);
    if(u<0.0){
        c=Point(a.x,a.y);
        return dist(p,a);
    }
    if(u>1.0){
        c=Point(b.x,b.y);
        return dist(p,b);
    }
    return distToLine(p,a,b,c);
}
int main() {
	input;
    Point m;
    while(cin>>m.x>>m.y){
        int n;
        cin>>n;
        std::vector<Point> v(n+1);
        for (int i = 0; i < n+1; ++i)
        {
            Point p;
            cin>>p.x>>p.y;
            v[i]=p;
        }
        double dist=10000000000;
        Point PS;
        for (int i = 0; i < n; ++i)
        {
           double distMtoP;
           Point P;
           distMtoP=distToLineSegment(m,v[i],v[i+1],P);
           if(dist>distMtoP){
                PS=P;
                dist=distMtoP;
           }

        }
        printf("%.4f\n%.4f\n",PS.x,PS.y );
    }
	return 0;
}