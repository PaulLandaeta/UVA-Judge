#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;

int main() {
  input;
  int n,t,m;
  cin>>n>>t>>m;
  std::vector<pair<int,int> > v[20];
  for (int i = 0; i < m; ++i)
  {
    int tiempo,team;
    string sol;
    char ejer;
    cin>>tiempo>>team>>ejer>>sol;
    if(sol=="Yes"){
      int sw=1;
      for (int d = 0; d < v[ejer-'A'].size(); ++d)
      {
        
        if(v[ejer-'A'][d].second==team)
          sw=0;
      }
      if(sw)
        v[ejer-'A'].push_back(make_pair(tiempo,team));
    }
  }
  for (int i = 0; i < n; ++i)
  {
    if(v[i].size()==0)
      cout<<char(i+'A')<<" - -"<<endl;
    else
      cout<<char(i+'A')<<" "<<v[i][v[i].size()-1].first<<" "<<v[i][v[i].size()-1].second<<endl;
  }
  return 0;
}