/* go go Accepted*/
#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
#define EPS 1e-9
#define PI acos(-1.0)

int main() {
	input;
	int t;
	cin>>t;
	while(t--){
			std::vector<int> v(4);
		for (int i = 0; i < 4; ++i)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		if(v[0]==v[3]){
			cout<<"square"<<endl;
		}
		else
		{
			if(v[0]==v[1] && v[2]==v[3]){
				cout<<"rectangle"<<endl;
			}
			else
				if(v[3]<v[1]+v[2]+v[0] )
					cout<<"quadrangle"<<endl;
				else
					cout<<"banana"<<endl;
		}
	}
	return 0;
}
