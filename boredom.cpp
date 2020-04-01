#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> v1,v2;
ll dp[1001]={0};
ll check(ll n){
    if(n<=0) return 0;
    if(dp[n]!=0) return dp[n];
    ll le,ri;
  if(v1[n-1]-v1[n-2]==1) le=v2[n-1]*v1[n-1]+check(n-2);
  else le=v2[n-1]*v1[n-1] +check(n-1);
  ri=check(n-1);
//cout<<n<<" "<<le<<" "<<ri<<"\n";
  dp[n]=max(le,ri);
return dp[n];
}
int solve(int n,vector<int> a){
  sort(a.begin(),a.end());
    int s=a[0],c=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            v1.push_back(s);
            v2.push_back(c);
            s=a[i];
            c=1;
        }
        else c++;
    }
    v1.push_back(s);
    v2.push_back(c);
    ll ans = check(v1.size());
 return ans;
}