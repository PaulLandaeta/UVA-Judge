/*Autor: Paul Wilker Landaeta Flores
*Juez: UVA-10370
*sol: Mat- ad-hock
*Res: Aceptado
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define MAXN 1000010
#define EPS 1e-8
#define PI acos(-1)
#define Vector Point

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int s=accumulate(v.begin(),v.end(),0);
        s=s/n;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>s)
                c++;
        }
        printf("%.3f",(double)(c*100/(double)n));
        cout<<'%'<<endl;
    }


    return 0;
}
