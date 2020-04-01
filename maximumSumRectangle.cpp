#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m;
int dp[100][100]={0};
int grid(int a[][500],int l,int r){
    if(dp[l][r]!=0) return dp[l][r];
    int ar[n];
    int s=0,ms=INT_MIN;
    if(l<=r){
        if(l==0) for(int i=0;i<n;i++) ar[i]=a[i][r];
        else for(int i=0;i<n;i++) ar[i]=a[i][r]-a[i][l-1];
        for(int i=0;i<n;i++){
            s+=ar[i];
            if(ms<s) ms=s;
            if(s<0) s=0;
        }
        if(ms==0){
            ms=*max_element(ar+0,ar+n);
        }
        int le=grid(a,l+1,r);
        int ri=grid(a,l,r-1);
        dp[l][r]=max(ms,max(le,ri));
        return max(ms,max(le,ri));
    }
return INT_MIN;
}
int main(){
    
    cin>>n>>m;
    
    int a[500][500];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
    for(int i=0;i<n;i++) for(int j=1;j<m;j++) a[i][j]+=a[i][j-1];
    int ans=grid(a,0,m-1);
    cout<<ans;
}