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
        int n,m,x,y;
        cin>>n>>m;
        vector<pair<int,int> > v;
        vector<int> a,b;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            v.push_back(make_pair(x,y));
            a.push_back(x);
            b.push_back(y);
        }
        while(m--){
            cin>>x;
            
        }
    }

return 0;
}