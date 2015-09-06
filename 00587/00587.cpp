//Ley de senos sen45 sqrt(2)/2;
#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
#define EPS 1e-8
#define PI acos(-1)
#define Vector Point
 
struct Pointx
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
double dist(const Point &A, const Point &B)    { return hypot(A.x - B.x, A.y - B.y); }
Point finalPoint(string steps){
	double x=0,y=0;
	int num=0;
	for(int i=0;i<steps.size();i++){
		if(steps[i]>='0' && steps[i]<='9'){
			num=num*10+steps[i]-'0';
		}
		else{
			if(steps[i]==',' || steps[i]=='.'){
				num=0;
			}

			if(steps[i]=='N'){
				if(steps[i+1]==',' || steps[i+1]=='.'){
					y+=num;
					num=0;
					i++;
				}
				if(steps[i+1]=='W'){
					x-=(num*sqrt(2))/2;
					y+=(num*sqrt(2))/2;
					num=0;
					i+=2;
				}
				if(steps[i+1]=='E'){
					x+=(num*sqrt(2))/2;
					y+=(num*sqrt(2))/2;	
					num=0;
					i+=2;
				}
			}
			if(steps[i]=='W'){
				x-=num;
			}
			if(steps[i]=='E'){
				x+=num;
			}
			if(steps[i]=='S'){
				if(steps[i+1]==',' || steps[i+1]=='.'){
					y-=num;
					num=0;
					i++;
				}
				if(steps[i+1]=='W'){
					x-=(num*sqrt(2))/2;
					y-=(num*sqrt(2))/2;
					num=0;
					i+=2;
				}
				if(steps[i+1]=='E'){
					x+=(num*sqrt(2))/2;
					y-=(num*sqrt(2))/2;	
					num=0;
					i+=2;
				}
			}
		}
	}
	return Point(x,y);
}
int main() {
	input;
	int n=1;
	while(true){
		string steps;
		cin>>steps;
		if(steps=="END")
			break;
		printf("Map #%d\n",n++);
		Point final=finalPoint(steps);
		printf("The treasure is located at (%.3f,%.3f).\n",final.x,final.y);
		printf("The distance to the treasure is %.3f.\n",dist(Point(0,0),final));
		cout<<endl;
	}
	return 0;
}