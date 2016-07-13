#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int main() {
	//input;
	int t;
	cin>>t;
	for (int i = 1; i <= t; ++i)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a<=20 && b<=20 && c<=20)
			printf("Case %d: good\n",i);
		else
			printf("Case %d: bad\n",i);

	}
	return 0;
}