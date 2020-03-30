#include<bits/stdc++.h>
using namespace std;

int merge(int a[],int l,int h){
    int mid=(l+h)/2;
    int le[mid - l +1];
    int ri[h-mid];
    int n=mid-l+1;
    int m=h-mid;
    for(int i=0;i<n;i++) le[i]=a[i+l];
    for(int i=0;i<m;i++) ri[i]=a[mid+1+i];
    int i=0,j=0,co=0,k=l;
    
    while(i!=n &&j!=m){
        if(le[i]>ri[j]){
            co+=n-i;
            a[k]=ri[j];
            k++;j++;
        }
        else{
            a[k]=le[i];
            i++;k++;
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
int inverse(int a[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        int le=inverse(a,l,mid);
        int ri=inverse(a,mid+1,h);
        int co=merge(a,l,h);
        return le+ri+co;
    }
return 0;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(abs(a[i] - i-1)>2) {
            cout<<"NO";
            return 0;
        }
    }
    int ans=inverse(a,0,n-1);    
        cout<<"YES\n"<<ans;
        
	
}