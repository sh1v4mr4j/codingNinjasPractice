#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
ll dp[100010];
ll a[26]={-1};
ll solve(string s){
    int n=s.length();
    for(int i=0;i<26;i++) a[i]=-1;
    dp[0]=1;
    for(ll i=1;i<=n;i++){
        dp[i]=(2*(dp[i-1]%m))%m;
      ll in=s[i-1] - 'A';
        
        if(a[in]!=-1) dp[i]=(dp[i]%m - dp[a[in]]%m + m)%m;
        a[in]=i-1;
        dp[i]=dp[i]%m;
        //cout<<dp[i]<<" ";  
    }
//cout<<"\n";
return dp[n];
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll sol=solve(s);
        cout<<sol<<"\n";
    }
    return 0;
}