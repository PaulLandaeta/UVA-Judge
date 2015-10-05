#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;

char buf[1000010];
 
int main() {
  long long n;
  cin>>n;
  long long a=1;
  while(n>0){
      if(n%2==1)
        a++;
      n/=2;
  }
  cout<<a<<endl;
  return 0;
}