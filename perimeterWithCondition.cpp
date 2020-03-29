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

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a+0,a+n);

    int j=n-2;
    int d=1;
    while(j){
        if(a[j-1]+a[j]>a[j+1]) { d=0; cout<<a[j-1]<<" "<<a[j]<<" "<<a[j+1]; break;}
        j--;
    }
    if(d) cout<<-1;

return 0;
}