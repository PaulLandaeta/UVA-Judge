#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
long long m=1000000007;
long long pow2(long long n,long long k){
	long long res=1;
	while(k){
		if(k&1)res=(res*n)%m;
		n=(n*n)%m;
		k>>=1;
	}
	return res;
}

long long f(vector<char> v){
	int s=v.size();
	long long sol=0;
	std::list<int>::iterator it1,it2;
	while(s){
		
		if(s%2==1){
			int n=s/2;
			s--;
			if(v[n]=='1')
				sol=(sol+pow2(2,s))%m;
			v.erase(v.begin()+n);
		}
		else
		{
			int n=s/2;
			int n1=n-1;
			s--;
			if(v[n]=='1'){
				sol=(sol+pow2(2,s))%m;
				v.erase(v.begin()+n);
			}
			else{
				if(v[n1]=='1'){
				sol=(sol+pow2(2,s))%m;
				v.erase(v.begin()+n1);
				}
				else{
					v.erase(v.begin()+n);
				}
			}

		}
		//cout<<sol<<endl;
	}
	return sol;
}
int main() {
  input;
  int t;
  cin>>t;
  int ca=1;
  for (int i = 0; i < t; ++i)
  {
  	string cad;
  	cin>>cad;
  	std::vector<char> v(cad.size());
  	for (int i = 0; i <cad.size(); ++i)
  		v[i]=cad[i];
  	printf("Case #%d: %d\n",ca++,f(v));
  }
}