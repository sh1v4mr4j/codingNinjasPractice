#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int dp[33][20]={0};
ll solve(int a[],int t,int i,int n,bool st,int am){
    if(t==0||i==n) return 0;
    else if(dp[i][t]!=0) return dp[i][t];
    if(st==true){
        ll le=solve(a,t,i+1,n,true,0);
        ll ri=solve(a,t,i+1,n,false,a[i]);
        dp[i][t]=max(le,ri);
        return max(le,ri);
    }else{
        ll le=solve(a,t,i+1,n,false,am);
        ll ri=0;
        if(a[i]>am)
        	ri=solve(a,t-1,i+1,n,true,0) + a[i] - am;
        dp[i][t]=max(le,ri);
        return max(le,ri);
    }
return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>k>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        ll sol=solve(a,k,0,n,true,0);
        cout<<sol<<"\n";
    }
    return 0;
}

