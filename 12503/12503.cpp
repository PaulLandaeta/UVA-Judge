#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int main() {
	input;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		std::vector<int> v(n);
		int sol=0;
		for (int i = 0; i < n; ++i)
		{
			string cad;
			cin>>cad;
			if(cad[0]=='S'){
				cin>>cad;
				int pos;cin>>pos;
				v[i]=v[pos-1];
			}
			else{
				if(cad[0]=='R')
					v[i]=1;
				else
					v[i]=-1;
			}
			sol+=v[i];
		}
		cout<<sol<<endl;
	}
	return 0;
}