#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool check(string s1,string s2,int l){
    int n=s1.length();
    int m=s2.length();
    int dp[n+1][m+1]={0};
        for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){ dp[i][j]=0;} }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0) dp[i][j]=0;
            else if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1] +1;
            else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    //cout<<dp[n][m]<<"\n";
if(dp[n][m]>=l)return true;
return false;
}
ll solve(string s1,string s2,int l){
    int n=s1.length();
    int m=s2.length();
    int dp[n+1][m+1][l+1]={0};
    
	for(int i=0;i<=l;i++){
        for(int j=0;j<=n;j++){
            for(int k=0;k<=m;k++){
                dp[j][k][i]=0;}}}
    
    for(int i=1;i<=l;i++){
        for(int j=i;j<=n;j++){
            for(int k=i;k<=m;k++){
                int ro=0;
                if(s1[j-1]==s2[k-1])
                {
                     ro=dp[j-1][k-1][i-1] + (int)(s1[j-1]);
                    //cout<<s1[j-1]<<" "<<s2[k-1]<<" "<<i<<"\n";
                }
                dp[j][k][i]=max(ro,max(dp[j][k-1][i],dp[j-1][k][i]));
            }
        }
    }
    // cout<<"hell\n";
    //     for(int i=0;i<=l;i++){
    //     for(int j=0;j<=n;j++){
    //         for(int k=0;k<=m;k++){
    //             cout<<dp[j][k][i]<<" ";}
    //         cout<<"\n";}
    //     cout<<"\n";}


return dp[n][m][l];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        //cout<<"hello\n";
        string s1,s2;
        cin>>s1>>s2;
        int l;
        cin>>l;
        bool che=check(s1,s2,l);
        ll sol=0;
        if(che) sol=solve(s1,s2,l);
        cout<<sol<<"\n";
    }
return 0;
}