#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int main() {
	input;
	int a,b;
	while(cin>>a>>b && a && b){
		std::vector<int> v(a);
		for (int i = 0; i < a; ++i)
		{
			cin>>v[i];
		}
		for (int i = 0; i < b; ++i)
		{
			int x,y,z;
			cin>>x>>y>>z;
			v[x-1]-=z;
			v[y-1]+=z;
		}
		int sw=1;
		for (int i = 0; i < a; ++i)
		{
			if(v[i]<0)
				sw=0;
		}
		if(sw)
			cout<<"S"<<endl;
		else
			cout<<"N"<<endl;
	}
	return 0;
}