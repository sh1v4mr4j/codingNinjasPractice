#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int dp[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin>>a[i][j];
    
    for(int j=0;j<m;j++) dp[0][j]=a[0][j];
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==0) dp[i][j]=min(dp[i-1][j],dp[i-1][j+1]) +a[i][j];
            else if(j==m-1) dp[i][j]=min(dp[i-1][j],dp[i-1][j-1])+a[i][j];
            else{
                dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i-1][j+1])) + a[i][j];
            }
        }
    }
    // for(int i=1;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    int s=dp[n-1][0];
    for(int j=1;j<m;j++){
        s=min(s,dp[n-1][j]);
    }
    cout<<s;
    return 0;
}

