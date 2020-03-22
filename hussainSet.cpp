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

        int n,m;
        cin>>n>>m;
        int a[n],x;
        queue<int> q;
        for ( int i = 0; i < n; i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        int j=0,i=0;
        int ep=n-1;
        
            cin>>x;
            
            while(i!=m){
                if(x-1==j){
                   if(!q.empty()){
                        if(q.front()>a[ep]) {cout<<q.front()<<"\n";}
                        else {cout<<a[ep]<<"\n";}
                    }
                    else {cout<<a[ep]<<"\n";}
                    cin>>x;
                    i++;
                }
                else{
                    if(!q.empty()){
                        if(q.front()>a[ep]) {q.push(q.front()/2); q.pop();}
                        else {q.push(a[ep]/2); ep--;}
                    }
                    else {q.push(a[ep]/2); ep--;}
                    j++;
                }
            }
        
        

return 0;
}