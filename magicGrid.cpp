#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int r,c;
int dp[500][500];
int a[500][500];
ll grid(int i,int j){
    if(dp[i][j]!=1) return dp[i][j];
    ll le=grid(i,j+1);
    ll ri=grid(i+1,j);
   // cout<<le<<" "<<ri<<" "<<i<<" "<<j<<"\n"; 
    if(a[i][j]+le<0) le=a[i][j]+le;
    else le=0;
    if(a[i][j]+ri<0) ri=a[i][j]+ri;
    else ri=0;
    dp[i][j]=max(le,ri);
    return max(le,ri);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>r>>c;
        
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++) 
                cin>>a[i][j];
         for(int i=0;i<r;i++)
            for(int j=0;j<c;j++) 
               dp[i][j]=1;     
        int s=0;
        for(int j=c-2;j>=0;j--) {
            if(s+a[r-1][j]<0) dp[r-1][j]=s+a[r-1][j];
            else dp[r-1][j]=0;
            s+=a[r-1][j];
        }
         s=0;
        for(int j=r-2;j>=0;j--) {
            if(s+a[j][c-1]<0) dp[j][c-1]=s+a[j][c-1];
            else dp[j][c-1]=0;
            s+=a[j][c-1];
        }
        ll ans=grid(0,0);
        cout<<(-1)*ans+1<<"\n";
    }
    return 0;
}

