#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;

char buf[1000010];
 
int main() {
  input;
  int t;
  cin>>t;
  while(t--){
    string cad;
    cin>>cad;
    int sum=0;
    int c=0;
    for (int i = 0; i < cad.size(); ++i)
    {
      if(cad[i]=='O'){
        c++;
        sum+=c;
      }
      else{
        c=0;
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}