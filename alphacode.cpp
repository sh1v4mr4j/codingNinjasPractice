#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
#define ll long long int



ll alpha(string v, int n,int a[]){
    a[0]=1;
    a[1]=1;
    if(v[0]=='0') return 0;
    
    for(int i=2;i<=n;i++){
        //cout<<v[i-1]<<" "<<a[i-1];
        if(v[i-1]>'0') a[i]=a[i-1]%m;
        if(v[i-2]=='1'||(v[i-2]=='2' && v[i-1]<'7')) a[i]+=a[i-2]%m;
        
        a[i]=a[i]%m;
    }
return a[n];
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string v;
    while(1){
        cin>>v;
        if(v=="0") break;
       int c=v.length();
        
        int a[c+1]={0};
     ll ans=alpha(v,c,a);
        cout<<ans<<"\n";
    }
    return 0;
}

