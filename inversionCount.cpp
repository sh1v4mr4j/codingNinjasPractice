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
ll mergeS(int a[],int l,int h){
    int mid=(l+h)/2;
    int n=mid-l+1;
    int m=h-mid;
    int  le[mid-l+1];
    int ri[h-mid];

    for(int i=l;i<=mid;i++)    le[i-l]=a[i];
    for (int i = mid+1; i <=h; i++)    ri[i-mid-1]=a[i];
    ll co=0;
    int i=0,j=0,k=l;
    while(i!=n && j!=m){
        if(le[i]<=ri[j]) {
            a[k]=le[i];
            i++;
            k++;
        }
        else{
            co+=n-i;
            a[k]=ri[j];
            j++;
            k++;
        }
    }
    while(i!=n){
        a[k]=le[i];
        k++;
        i++;
    }
    while(j!=m){
        a[k]=ri[j];
        j++;
        k++;
    }
return co;
}

ll mergeSort(int a[],int l,int h){
    if(l<h){
    int mid=(l+h)/2;
    ll le=mergeSort(a,l,mid);
    ll ri=mergeSort(a,mid+1,h);
    ll co=mergeS(a,l,h);
    return le+ri+co;
    }
return 0;
}



int main() {

    int n,i;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
     cin>>a[i];
    }

    
    ll co=mergeSort(a,0,n-1);
    cout<<co<<"\n";

return 0;
}