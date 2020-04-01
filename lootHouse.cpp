#include<bits/stdc++.h>
int dp[10000]={0};
int getMaxMoney(int a[], int n){
    if(n>0){
    if(dp[n-1]!=0) return dp[n-1];
    int le=a[n-1]+getMaxMoney(a,n-2);
    int ri=getMaxMoney(a,n-1);
    //cout<<n<<" "<<le<<" "<<
    dp[n-1]=le>ri?le:ri;
    return dp[n-1];
    }
return 0;
}

