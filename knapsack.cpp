#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int knapsack(int* w, int* v, int n, int mw){
    int dp[mw+1]={0};
	for(int i=0;i<n+1;i++){
        for(int j=mw;j>=w[i];j--)
            dp[j]=max(dp[j],v[i]+dp[j-w[i]]);
    }
    
    
 return dp[mw];
}

