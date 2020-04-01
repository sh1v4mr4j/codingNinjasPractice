#include<iostream>
#include<cstring>
using namespace std;

int lcs(string s1, string s2){
  int n=s1.length();
  int m=s2.length();
  int a[n+1][m+1];
  for(int i=0;i<n+1;i++){
      for(int j=0;j<m+1;j++){
          if(i==0||j==0) a[i][j]=0;
          else if(s1[i-1]==s2[j-1]) a[i][j]=1+a[i-1][j-1];
          else a[i][j]=max(a[i-1][j],a[i][j-1]);
      }
  }
return a[n][m];
}

