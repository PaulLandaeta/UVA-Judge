#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;

int main() {
 // input;
  int t;
  cin>>t;
  while(t--){
     int L,D,H,V;
     cin>>L>>D>>H>>V;
     double tiempo=sqrt((2*H)/9810.0);
     double dist=V*tiempo;
     if(dist<=D-500 || dist>=(D+L+500))
     	cout<<"FLOOR"<<endl;
     else{
     	if(dist>=D+500 && dist<=D+L-500)
     		cout<<"POOL"<<endl;
     	else
     		cout<<"EDGE"<<endl;
     }
  }
 return 0;
}