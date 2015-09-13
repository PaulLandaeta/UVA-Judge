/*
problema E 
Nacional Brasil 2015
hallar las sumas de las diagonales cuando
i==j

*/


#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;
long long N;
long long f(long long i)
{
	if(i==0)
		return 1;
	return 4*N*i-(4*i*(i-1))-(4*i)+1;
}
int main() {	
	//input;
	long long B;
	while(cin>>N>>B){
		int posi=0,posj=0;
		long long tamano=N;
		long long sum=1;
		long long ant=1;
		long long l=0;
		long long r=N/2+1;
		while(l<r){
			long long mid=(l+r)>>1;
			if(f(mid)<=B){
				l=mid+1;
			}
			else r=mid;
		}
		ant=f(l-1);
		posi=l-1;
		posj=l-1;
		tamano-=2*(l-1);
		int lado=-1;
		long long suma=ant-1;
		for (int i = 0; i < 4; ++i)
		{
			if(i%2==0){
				suma+=tamano;
				if(suma>=B){
					lado=i;
					break;
				}
			}
			else
			{
				suma+=tamano-2;
				if(suma>=B){
					lado=i;
					break;
				}
			}
		}
		if(lado==0){
			posj+=B-(ant);
		}
		if(lado==1){
			posj+=tamano-1;
			long long aux=ant+tamano-1;
			posi+=B-aux;
		}
		if(lado==2){
			posi+=tamano-1;
			posj+=tamano-1;
			long long aux=ant+2*tamano-2;
			posj-=B-aux;
		}
		if(lado==3){
			long long aux=ant+4*tamano-5;
			posi+=aux-B+1;
		}
		cout<<posi+1<<" "<<posj+1<<endl;
	}
	return 0;
}