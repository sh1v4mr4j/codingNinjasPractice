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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int buff;
        ll n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        ll l=0,h=1e9;
        while(l<=h){
            
            int mid=(l+h)/2;
            
            ll co=0;
            for(int i=0;i<n;i++){
                co+=a[i]/mid;
            }
            cout<<mid<<" "<<co<<"\n";
            if(co>=k) { 
                if(co==k) 
                    buff=mid; 
                l=mid+1;
                }
            else if(co<k) h=mid-1;
            
        }
       
     cout<<buff<<"\n";
    }

return 0;
}