#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;

char buf[1000010];
 
int main() {
  input;
  int a,b;
  cin>>a>>b;
  pair<int,int> punto;
  punto.first=a-b;
  punto.second=0;
  double x;
  double sol;
  int sw=0;
  int aux1=punto.first/(2*b)-1;
  for (int i = aux1;; ++i)
  {
  		x=punto.first/(2*i*1.0);
  		double aux=x*2*i;
  		if(x<b)
  			break;
  		if(aux==punto.first){
  			sol=x;
  			sw=1;
  		}
  		
  }
  punto.first=a+b;
  punto.second=0;
  x;
  for (int i = aux1;; ++i)
  {
  		x=punto.first/(2*i*1.0);
  		double aux=x*2*i;
  		if(x<b)
  			break;
  		if(aux==punto.first){
  			sol=min(x,sol);
  			sw=1;
  		}
  		
  }
  if(sw)
  	cout<<sol<<endl;
  else
  	cout<<-1;
  return 0;
}