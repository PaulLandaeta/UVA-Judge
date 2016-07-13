#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int main() {
	input;
	int t;
	cin>>t;
	string cad;
	while(t--){
		cin>>cad;
		if(cad=="4" || cad=="1" || cad=="78"){
			cout<<"+"<<endl;
		}
		else{
			if(cad[cad.length()-1]=='5' && cad[cad.length()-2]=='3') 
				cout<<"-"<<endl;
        	else
        	 	if(cad[cad.length()-1]=='4' && cad[0]=='9') 
        	 		cout<<"*"<<endl;
        	else
     		   			cout<<"?"<<endl;
     
		}
	}
	return 0;
}