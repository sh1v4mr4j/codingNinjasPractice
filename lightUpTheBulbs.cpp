#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,x,y;
    cin>>n>>x>>y;
    string a;
    cin>>a;
    a=a+"1";
    ll co=0;
    for(int i=0;i<n;i++){
        //cout<<a[i]<<" "<<a[i+1]<<"\n";
        if(a[i]=='0' && a[i+1]=='1') co++;
    }
    //cout<<co;
    if(co==0) cout<<0;
    else cout<<min(x*(co-1)+y,y*co);
	return 0;
}

