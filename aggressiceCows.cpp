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

    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //cout<<"\n";
        sort(a,a+n);
        int h=a[n-1] -a[0];
        int l=0,p=-1;
        int x=1,dis=0;
        while(l<=h){
            int mid=(l+h)/2;
            //cout<<mid<<"    ";
            x=1;dis=0;
            for(int i=1;i<n;i++){
                //cout<<dis + a[i]-a[i-1]<<" ";
                if(dis+a[i]-a[i-1]<mid) dis+=a[i]-a[i-1];
                else if(dis+a[i]-a[i-1]>=mid){
                    x++;
                    dis=0;
                }
            }
            //cout<<"    "<<x<<"\n";
            if(x==c){
                p=max(mid,p);
                l=mid+1;
            }
            if(x>c) l=mid+1;
            if(x<c) h=mid-1;

        }
        cout<<p<<"\n";

    }

return 0;
}