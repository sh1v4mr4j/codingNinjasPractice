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
ll murder(int a[],int l,int h){
    ll co=0;
    int mid=(l+h)/2;
    int n=mid -l+1;
    int m=h-mid;
    int le[n];
    int ri[m];
    for(int i=0;i<n;i++){
        le[i]=a[l+i];
    }
    for(int i=0;i<m;i++){
        ri[i]=a[i+mid+1];
    }
    int i=0,j=0,k=l;
    while(i!=n&&j!=m){
        if(le[i]>=ri[j]){
            a[k]=ri[j];
            k++;
            j++;
        }
        else{
            a[k]=le[i];
            //cout<<a[k]<<" "<<l<<" "<<h<<"\n";
            co+=a[k]*(m-j);
            //cout<<co<<"\n";
            i++;
            k++;
        }
    }
    while(i!=n){
        a[k]=le[i];
        i++;
        k++;
    }
    while(j!=m){
        a[k]=ri[j];
        j++;
        k++;
    }
return co;
}

ll murderSort(int a[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        ll le=murderSort(a,l,mid);
        ll ri=murderSort(a,mid+1,h);
        ll me=murder(a,l,h);
        return le + ri + me; 
    }
return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        cout<<murderSort(a,0,n-1)<<"\n";
    }

return 0;
}