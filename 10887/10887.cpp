#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
long long m=1000000007;
int main() {
  input;
  output;
  int t;
  scanf("%d", &t);
  int ca=1;
  string str;
  while(t--){
  	int n,m;
  	scanf("%d %d", &n, &m);
  	getline(cin,str);
  	std::vector<string> v(n);
  	std::vector<string> v2(m);
  	for (int i = 0; i < n; ++i)
  	{
  		getline (cin,v[i]);
  	}
  	for (int i = 0; i < m; ++i)
  	{
  		getline (cin,v2[i]);
  	}
  	//cout<<n<<"  "<<m<<endl;
  	set<string> s;
  	for (int i = 0; i < n; ++i)
  	{
  		//cout<<"asdfghjkjhgfdswswdfio"<<endl;
  		for (int j = 0; j < m; ++j)	
  		{
  			string cad=v[i]+v2[j];
  			s.insert(cad);
  		}
  	}
  	printf("Case %d: %d\n",ca++,s.size());
  }
}