#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int main() {
	input;
	int a,b;
	while(cin>>a>>b){
		if(a==-1 && b==-1)
			break;
		a++;
		b++;
		if(a==b)
			cout<<0<<endl;
		else{
			if(a>b)
			{
				cout<<min(a-b,b-a+100)<<endl;
			}	
			else{
				cout<<min(b-a,a-b+100)<<endl;
			}
		}
		
	}
	return 0;
}