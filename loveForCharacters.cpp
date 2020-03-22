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

    int n,a=0,s=0,p=0;
    cin>>n;
    string t;
    cin>>t;

    for (int i = 0; i < n; i++)
    {
        if(t[i]=='a') a++;
        else if(t[i]=='s') s++;
        else if(t[i]=='p') p++;
    }
    cout<<a<<" "<<s<<" "<<p<<"\n";


return 0;
}