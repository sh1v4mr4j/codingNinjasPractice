#include <bits/stdc++.h>
using namespace std;
bool solve(int a[],int n,int s){
    bool dp[n+1][s+1]={false};
    for(int i=0;i<n+1;i++) dp[i][0]=true;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<s+1;j++){
            if(j-a[i-1]>=0)
                dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
        	else
                dp[i][j]=dp[i-1][j];
        }
    }
        // for(int i=0;i<n+1;i++){
        // for(int j=0;j<s+1;j++){
        //     cout<<dp[i][j]<<" ";
        // }
        //     cout<<"\n";
        // }
    
    if(dp[n][s]==true) return true;
return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int sum;
    cin>>sum;
    bool ans=solve(a,n,sum);
    if(ans) cout<<"Yes";
    else cout<<"No";
    return 0;
}

