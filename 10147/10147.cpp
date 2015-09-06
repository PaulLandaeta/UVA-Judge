#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
int main() {
	input;
	int req,camp;
	int ca=1;
	while(cin>>req>>camp){
		if(req==0 && camp==0)
			break;
		if(ca!=1)
			cout<<endl;
		std::vector<string> v(req);
		cin.ignore();
		for (int i = 0; i < req; ++i)
		{
			
			getline(cin,v[i]);
			
		}
		std::vector<string> vcamp(camp);
		std::vector<double> vpa(camp);
		std::vector<int> vreq(camp);
		std::vector<int> vpos(camp);
		for (int i = 0; i < camp; ++i)
		{
			
			getline(cin,vcamp[i]);
			
			cin>>vpa[i]>>vreq[i];
			cin.ignore();
			for (int j = 0; j < vreq[i]; ++j)
			{
				string cad;
				getline(cin,cad);
			}
			vpos[i]=i+1;
		}
		for(int i=0;i<camp-1;i++){
			for(int j=i+1;j<camp;j++){
				if(vreq[i]<vreq[j]){
					swap(vcamp[i],vcamp[j]);
					swap(vreq[i],vreq[j]);
					swap(vpos[i],vpos[j]);
					swap(vpa[i],vpa[j]);
				}
				else
				{
					if(vreq[i]==vreq[j]){
						if(vpa[i]>vpa[j]){
							swap(vcamp[i],vcamp[j]);
							swap(vreq[i],vreq[j]);
							swap(vpos[i],vpos[j]);
							swap(vpa[i],vpa[j]);
						}
						else
						{
							if(vpa[i]==vpa[j]){
								if(vpos[i]>vpos[j]){
									swap(vcamp[i],vcamp[j]);
									swap(vreq[i],vreq[j]);
									swap(vpos[i],vpos[j]);
									swap(vpa[i],vpa[j]);
								}
							}
						}
					}
				}
			}
		}
		printf("RFP #%d\n",ca++);
		cout<<vcamp[0]<<endl;

	}
}