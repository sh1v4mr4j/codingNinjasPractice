#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[10001][5000]={0};
ll solve(int a[][2],int i,int n,int cap){
   
    if(cap==-1) return INT_MAX;
    else if(i==n && cap!=0) return INT_MAX;
    else if(i==n && cap==0) return 0;
    else if(dp[i][cap]!=0) return dp[i][cap];
     
    ll ass= a[i][1]+solve(a,i+1,n,cap+1);
    ll ca=a[i][0]+solve(a,i+1,n,cap-1);
    dp[i][cap]=min(ass,ca);
return min(ass,ca);
}

int main()
{
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++) cin>>a[i][0]>>a[i][1];
    //for(int i=0;i<n;i++) cout<<a[i][0]<<" "<<a[i][1]<<"\n";
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++) dp[i][j]=-1;
    // }
    int cap=0;
    ll sol=0;
    sol+=solve(a,0,n,cap);
    cout<<sol;
    return 0;
}

