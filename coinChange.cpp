#include<bits/stdc++.h>
int coin(int a[][11],int den[],int d,int n){
    if(n==0) return 1;
    else if(n<0) return 0;
    else if(d==0) return 0;
    else if(a[n][d]>0) return a[n][d];
    int le=coin(a,den,d,n-den[0]);
    int ri=coin(a,den+1,d-1,n);
    //cout<<n<<" "<<d<<" "<<le<<" "<<ri<<"\n";
    a[n][d]=le+ri;
    return le+ri;
}
int countWaysToMakeChange(int den[], int d, int n){
    //cout<<n<<"\n";
  int a[n+1][11]={0};
  int ans=coin(a,den,d,n);
return ans;
}

