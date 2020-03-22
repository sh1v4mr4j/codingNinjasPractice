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

    ll n,c,x,an;
    cin>>n;
    
    ll l=0,h=1e18;
    while(l<=h){
        x=n;
        ll mid=(l+h)/2;
        while(x){
            c=x-mid;
            x=x-mid;
            x/=10;
        }
        if(2*c<n) l=mid+1;
        if(2*c>=n){
            an=mid;
            h=mid-1;
        }
    }
    cout<<an<<"\n";

return 0;
}