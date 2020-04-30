#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[1010]={0};
int main()
{   
    ll w,n,x,y;
    while(1){
    cin>>w>>n;
    ll wt[110],val[110];
    if(w==0 && n==0) break;
    else{    
	    
        //cout<<w<<" "<<n<<"\n";
        for(ll i=0;i<n;i++) cin>>wt[i]>>val[i];
        
        for(ll i=0;i<w+1;i++) dp[i]=0;
        
        for(ll i=0;i<n;i++){
            for(ll j=w;j>=wt[i];j--)
                dp[j]=max(dp[j],val[i]+dp[j-wt[i]]);
        }
        
        ll j=w;
        while(j!=0 && dp[j]==dp[j-1]) j--;
        cout<<j<<" "<<dp[j]<<"\n";
    }
    }
    return 0;
}

