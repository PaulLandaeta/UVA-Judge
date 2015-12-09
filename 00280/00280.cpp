
#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int n;
std::vector<int> grafo[110];
std::vector<int> vis(110);
void dfs(int ini){
	vis[ini]++;
	for (int i = 0; i < grafo[ini].size(); ++i)
	{
		
		if(!vis[grafo[ini][i]])
			dfs(grafo[ini][i]);
	}
}
int main() {
//	input;
	while(cin>>n && n){
		cin.ignore();
		string line;
		getline(cin,line);
		while(line!="0"){
			
			stringstream ss(line);
			int x,y;
			ss>>x;
			while(ss>>y && y){
				grafo[x].push_back(y);
			}	
			getline(cin,line);
		}
		getline(cin,line);
		stringstream ss(line);
		int q;
		ss>>q;
		for (int i = 0; i < q; ++i)
		{
			int v;
			ss>>v;
			
			for (int j = 0; j < 110; ++j)
			{
				vis[j]=0;
			}
			vis[v]=-1;
			dfs(v);
			std::vector<int> novisit;
			for (int j = 1; j <= n; ++j)
			{
				if(!vis[j])
					novisit.push_back(j);
			}
			if(novisit.size()==0)
				cout<<novisit.size();
			else
				cout<<novisit.size()<<" ";
			for (int j = 0; j < (int)novisit.size()-1; ++j)
			{
				cout<<novisit[j]<<" ";
			}
			if((int)novisit.size()>0)
			cout<<novisit[novisit.size()-1]<<endl;
		}
		for (int i = 0; i < 110; ++i)
		{
			grafo[i].clear();
		}
		
	}
	return 0;
}
