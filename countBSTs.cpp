#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int dp[1000][1000]={0};
int  findMaxSquareWithAllZeros(int** a, int n, int m){ 
    int ar[n][m]={0};
    int s=0;
    for(int i=0;i<n;i++) if(a[i][0]==0) {ar[i][0]=1; s=1;}
    for(int i=0;i<m;i++) if(a[0][i]==0) {ar[0][i]=1;s=1;}
    
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]==0) ar[i][j]=min(ar[i-1][j],min(ar[i][j-1],ar[i-1][j-1]))+1;
            if(ar[i][j]>s) s=ar[i][j];
        }
    }
    
return s;
}