#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int main() {
	input;
	int t;
	cin>>t;
	int mile=30;
	int juice=60;
	int mileprice=10;
	int juiceprice=15;
	int cases=1;
	while(t--){
		int n;
		cin>>n;
		long long totalmile=0,totaljuice=0;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin>>x;
			int m=(x+mile)/mile;
			int j=(x+juice)/juice;
			totalmile+=mileprice*m;
			totaljuice+=juiceprice*j;
		}
		if(totaljuice>totalmile){
			printf("Case %d: Mile %d\n",cases++,totalmile);
		}
		else{
			if(totaljuice==totalmile)
				printf("Case %d: Mile Juice %d\n",cases++,totaljuice);		
			else
				printf("Case %d: Juice %d\n",cases++,totaljuice	);
		}
	}
	return 0;
}