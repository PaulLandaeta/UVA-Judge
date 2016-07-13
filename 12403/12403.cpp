#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int main() {
	//input;
	int t;
	cin>>t;
	long long monto=0;
	while(t--){
		string cad;
		cin>>cad;
		if("report"==cad)
			cout<<monto<<endl;
		else{
			long long c;
			cin>>c;
			monto+=c;
		}

	}
	return 0;
}