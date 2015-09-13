#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
#define EPS 1e-9
struct point{
	double x,y;
	point(double _x,double _y) :x(_x),y(_y){}

	bool operator == (point other) const{
		return (fabs(x-other.x)<EPS && (fabs(y-other.y)<EPS));
	}
};

struct vec{
	double x,y;
	vec(double _x,double _y) :x(_x),y(_y){}
};
vec toVec(point a,point b){
	return vec(b.x-a.x,b.y-a.y);
}
vec sum2(vec a,vec b){
	return vec(b.x+a.x,b.y+a.y);
}
int main() {
	//input;
	double a,b,c,d,e,f,g,h;
	while(cin>>a>>b>>c>>d>>e>>f>>g>>h){
		vector< point > v;
		v.push_back(point(a,b));
		v.push_back(point(c,d));
		v.push_back(point(e,f));
		v.push_back(point(g,h));
		for (int i = 0; i < 4; ++i)
		{
			for (int j = i+1; j < 4; ++j)
			{
				if(v[i]==v[j]){
					int pos=0;
					for (int k = 0; k < 4; ++k)
					{
						if(k!=i && k!=j)
							pos=k;
					}
					int posi=0;
					for (int k = 0; k < 4; ++k)
					{
						if(k!=i && k!=j && k!=pos)
							posi=k;
					}
				vec p2p1=toVec(v[i],v[pos]);
				vec p3p4=toVec(v[i],v[posi]);
				vec sum=sum2(p2p1,p3p4);
				printf("%.3f %.3f\n",(sum.x+v[i].x),(sum.y+v[i].y));			
				}
				
			}
		}
	}

}