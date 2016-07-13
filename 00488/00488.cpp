#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int main() {
	//input;
	int t;
	cin>>t;	
	int c=0;
	while(t--){
		int a,p;
		cin>>a>>p;
		if(c)
			cout<<endl;
		if(c==0)
			c++;
		for (int i = 0; i < p; ++i)
		{
			if(i)
				cout<<endl;
			for (int j = 1; j < a; ++j)
			{
				for (int l = 0; l < j; ++l)
				{
					cout<<j;
				}
				cout<<endl;
			}
			for (int j = a; j >0; j--)
			{
				for (int l = 0; l < j; ++l)
				{
					cout<<j;
				}
				cout<<endl;
			}
		}

	}
	return 0;
}