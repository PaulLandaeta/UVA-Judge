/* go go Accepted*/
#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int main() {
	input;
	int t;
    cin>>t;
    while(t--){
        
        int n,n1;
        cin>>n;
        std::vector<pair<string,pair<int,int> > > v(n);
        for (int i = 0; i < n; ++i)
        {
            string cad;
            cin>>cad;
            int a,b;
            cin>>a>>b;
            pair<int,int> p=make_pair(a,b);
            v[i]=make_pair(cad,p);
        }
        cin>>n1;
        while(n1--){
          int cont=0;
          string cad;
         for (int i = 0; i < n; ++i)
          {
             int p;cin>>p;
               if(v[i].second.first<=p && v[i].second.second>=p )
                {
                     cont++;
                    cad=v[i].first;
                }
              }   
        if(cont>0)
            cout<<cad<<endl;
        else
            cout<<"UNDETERMINED"<<endl;     
        }
       
    }
	return 0;
}
