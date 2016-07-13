#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int main() {
	input;
	int n;
	string song[]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy", "birthday" ,"to" ,"Rujia","Happy","birthday","to","you"};
	while(cin>>n){
		std::vector<string> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		if(n<=16){
			int cp=0;
			for (int i = 0; i < 16; ++i)
			{
				cout<<v[cp]<<": ";
				cout<<song[i]<<endl;
				cp++;
				cp=cp%n;	
			}	
		}
		else{
			int ci=0;
			for (int i = 0; i < n; ++i)
			{
				cout<<v[i]<<": ";
				cout<<song[ci]<<endl;
				ci++;
				ci=ci%16;
			}
			for (int i = 0; i < n && ci<16; ++i)
			{
				cout<<v[i]<<": ";
				cout<<song[ci]<<endl;
				ci++;
			}
				
		}
		
	}	
	return 0;
}