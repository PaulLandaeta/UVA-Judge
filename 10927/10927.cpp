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
    int x, y;
    int z;
    Point(){}
    Point(int a, int b,int c) { x = a; y = b;z=c; }
    Point(int a, int b) { x = a; y = b; }
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
/*bool cmp(Point a, Point b) {
    int x1 = a.x, y1 = a.y;
    int x2 = b.x, y2 = b.y;
    int a1 = x1 * y2;
    int a2 = x2 * y1;
    if (a1 == a2) {
        return x1 * x1 + y1 * y1 < x2 * x2 + y2 * y2;
    }
    return a1 < a2;
}*/
bool operator <(const Point &a, const Point &b)
{
    long long  x1 = a.x, y1 = a.y;
    long long  x2 = b.x, y2 = b.y;
    long long  a1 = x1 * y2;
    long long  a2 = x2 * y1;
    if (a1 == a2) {
        return x1 * x1 + y1 * y1 < x2 * x2 + y2 * y2;
    }
    return a1 < a2;

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
bool same(Point a , Point b) {
    long long x1 = a.x, y1 = a.y;
    long long x2 = b.x, y2 = b.y;
    long long a1 = x1 * y2;
    long long a2 = x2 * y1;
    return a1 == a2;
}
int main() {
	//input;
	int n;
	int t=1;
	while(cin>>n && n){
		
        std::vector<Point> v(n);
        Point p;
        for (int i = 0; i < n; ++i)
        {
            cin>>p.x>>p.y>>p.z;
         //   cout<<p.x<<" "<<p.y<<" "<<p.z<<endl;
            v[i]=p;
        }
        sort(v.begin(),v.end());
        std::vector<pair<int,int> > sol;
         int curH = v[0].z;
        for(int i=1;i<n;i++){
            if (same(v[i], v[i - 1])) {
                if (v[i].z <= curH) {
                    sol.push_back(make_pair(v[i].x, v[i].y));
                }
                else curH = max(curH, v[i].z);
            }
            else curH = v[i].z;
        }
        sort(sol.begin(),sol.end());
       printf("Data set %d:\n",t++);
        if (!sol.size()) puts("All the lights are visible.");
        else {
            puts("Some lights are not visible:");
            for(int i=0;i<sol.size();i++){
                printf("x = %d, y = %d", sol[i].first, sol[i].second);
                if (i == (int)sol.size() - 1) putchar('.');
                else putchar(';');
                puts("");
            }
        }

	}
	return 0;
}