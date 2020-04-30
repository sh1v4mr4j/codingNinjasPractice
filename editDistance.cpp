#include<iostream>
#include<cstring>
using namespace std;

int editDistance(string s1, string s2){
int n=s1.length();
int m=s2.length();
int dp[n+1][m+1]={0};
    //cout<<s1<<" "<<s2<<"\n";
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0) dp[i][j]=j;
            else if(j==0) dp[i][j]=i;
            else if(s1[i-1]==s2[j-1]) {
                dp[i][j]=dp[i-1][j-1];
               
            }
            else {
                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
            }
            //cout<<dp[i][j]<<" ";
        }
        //cout<<"\n";
    }
    
return dp[n][m];
}

