#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <queue>
#define ll long long int

using namespace std;
int comb(int n){
    return (n*(n-1)*(n-2))/6;
}

int main() {

    int n,x;
    map<int,int> mp;
    cin>>n;
    int y;
    for(int i=0;i<n;i++){
        cin>>y;
        mp[y]++;
    }
    cin>>x;
    vector<int> a;
    for(auto it=mp.begin();it!=mp.end();it++){
        a.push_back(it->first);
    }

     for(int i=0;i<a.size();i++){
        if(mp[a[i]>=3]) {
            if(3*a[i]==x){
                for(int ij=0;ij<comb(mp[a[i]]);ij++) cout<<a[i]<<" "<<a[i]<<" "<<a[i]<<"\n";
            }     
        }
        for(int j=i+1;j<a.size();j++){
            if(mp[a[j]]>=2){
            if(2*a[j]==x-a[i]){
                for(int ij=0;ij<((mp[a[j]]*(mp[a[j]]-1))/2)*mp[a[i]];ij++) cout<<a[i]<<" "<<a[j]<<" "<<a[j]<<"\n";
            } 
            }

            int l=j+1,h=a.size()-1;
            if(a[i]+a[j]+a[l]<=x){
            while(l<=h){
                int m=(l+h)/2;
                if(a[i]+a[j]+a[m]==x){
                    for(int ii=0;ii<mp[a[i]]*mp[a[j]]*mp[a[m]];ii++)
                    cout<<a[i]<<" "<<a[j]<<" "<<a[m]<<"\n";
                    break;
                }
                else if(a[i]+a[j]+a[m]>x) h=m-1;
                else l=m+1;
            }
            }
        }
    }



return 0;
}