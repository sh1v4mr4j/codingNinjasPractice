#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k,l,maxi=-1;
    double mean,sum=0;
    cin>>n>>k>>l;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
        if(a[i]>maxi) maxi=a[i];
    }
    int mas=0;
    mean=ceil(sum/(double)n);
    //cout<<mean;
    for(int i=0;i<n;i++) {
        mas+=maxi-a[i];
        a[i]-=mean;
    }
    
    int po=0;
    int ne=0;
    for(int i=0;i<n;i++){
        if(a[i]>0) po+=a[i];
        else ne-=a[i];
    }
    int as,b;
    as=min(po,ne);
    b=abs(po-ne);
    
    cout<<min(as*k+b*l,mas*l);
    
}