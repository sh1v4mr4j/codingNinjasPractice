#include<bits/stdc++.h>
using namespace std;
int dp[1000]={0};
int minCount(int n){
    if(n==0) return 0;
    int s=INT_MAX;
    for(int i=sqrt(n);i>0;i--){
        if(dp[n-i*i]!=0) s=min(s,dp[n-i*i]);
        else{
            int le=minCount(n-i*i);
            s=min(le,s);
        }
    }
dp[n]=s+1;
return s+1;
}