#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int main() {
	//input;
	string cad;
	int t=1;
	while(cin>>cad){
		if(cad=="*")
			break;
		if("Hajj"==cad){
			printf("Case %d: Hajj-e-Akbar\n", t++);
		}
		else{
			printf("Case %d: Hajj-e-Asghar\n", t++);
		}
	}
	return 0;
}