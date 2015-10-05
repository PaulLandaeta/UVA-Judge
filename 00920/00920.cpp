#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
#define EPS 1e-9
struct point { double x, y;   
  point() { x = y = 0.0; }               
  point(double _x, double _y) : x(_x), y(_y) {}
  bool operator < (point other) const { 
    if (fabs(x - other.x) > EPS)  
      return x < other.x;        
    return y < other.y; }        
  bool operator == (point other) const {
   return (fabs(x - other.x) < EPS && (fabs(y - other.y) < EPS)); } };

double dist(point p1, point p2) {
  return hypot(p1.x - p2.x, p1.y - p2.y); 
}    
struct line { double a, b, c; };   
void pointsToLine(point p1, point p2, line &l) {
  if (fabs(p1.x - p2.x) < EPS) {              // vertical line is fine
    l.a = 1.0;   l.b = 0.0;   l.c = -p1.x;           // default values
  } else {
    l.a = -(double)(p1.y - p2.y) / (p1.x - p2.x);
    l.b = 1.0;              // IMPORTANT: we fix the value of b to 1.0
    l.c = -(double)(l.a * p1.x) - p1.y;
} }

bool areIntersect(line l1, line l2, point &p) {
  
  p.x = (l2.b * l1.c - l1.b * l2.c) / (l2.a * l1.b - l1.a * l2.b);
  if (fabs(l1.b) > EPS) p.y = -(l1.a * p.x + l1.c);
  else                  p.y = -(l2.a * p.x + l2.c);
  return true; }
 
int main() {
  //input;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    std::vector<point> v(n);
    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin>>x>>y;
        point p(x,y);
        v[i]=p;
    }
    sort(v.begin(),v.end());
    double sum=dist(v[v.size()-1],v[v.size()-2]);
    point pri=v[v.size()-2];
    for(int i=v.size()-3;i>=0;i--){
      if(pri.y<v[i].y){
          line a,b;
          pointsToLine(v[i],v[i+1],a);
          point pa(0,pri.y);
          pointsToLine(pa,pri,b);
          point inte;
          areIntersect(a,b,inte);
          sum+=dist(v[i],inte);
          pri=v[i];
      }
    }
    printf("%.2f\n",sum);
  }
  return 0;
}