#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int dp[1000][1000]={-1};
ll solve(int a[],int i,int j, int c,int n,int k){
    //cout<<i<<" "<<c<<" "<<j<<" ";
    if(i==2*n && c!=0) return 0;
    else if(i==2*n && c==0) return 1;
    else if(c==-1) return 0;
    else if(dp[i][c]!=-1) return dp[i][c];
    if(j<k && i+1==a[j]){
        //cout<<"helloo\n";
        ll le= solve(a,i+1,j+1,c+1,n,k);
        dp[i][c]=le;
        return le;
    }
    else{
        //cout<<"hello\n";
        int le= solve(a,i+1,j,c+1,n,k);
        int ri= solve(a,i+1,j,c-1,n,k);
        dp[i][c]=le+ri;
        return le+ri;
    }
return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
      int n,k;
        cin>>n>>k;
        for(int i=0;i<2*n;i++){
            for(int j=0;j<2*n;j++) dp[i][j]=-1;
        }
        int a[k];
        for(int i=0;i<k;i++) cin>>a[i];
        sort(a+0,a+k);
        ll sol =solve(a,0,0,0,n,k);
        
        cout<<sol<<"\n";
    }
    return 0;
}

