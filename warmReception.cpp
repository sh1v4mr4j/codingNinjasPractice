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

    int h[100]={0};

    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int d=0;
    for(int i=0;i<n;i++){
        if(a[i]%100==0) d=0;
        else d=1;
        //cout<<2*(a[i]/100) + d<<"\n";
        h[2*(a[i]/100) + d]+=1;
        if(b[i]%100==0) d=0;
        else d=1;
        if(2*(b[i]/100) + b[i]%100==48) continue;
        else h[2*(b[i]/100) + d +1]-=1;
    }
    int maxo=h[0];
    for(int i=1;i<49;i++){
       h[i]+=h[i-1];
       maxo=max(h[i],maxo);
    }
    cout<<maxo<<"\n";
    

return 0;
}