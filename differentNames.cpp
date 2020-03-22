#include <vector>
#include <list>
#include <map>
#include<unordered_map>
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

    string s,j="";
    vector<string> str;
    
    getline(cin,s);
    vector<int> v;
    unordered_map<string,int> mp;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
        
            mp[j]++;
            j="";
        }
        else{
            j=j+s[i];
        }
    }
    mp[j]++;
    int d=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second==1) continue;
        else {
            cout<<it->first<<" "<<it->second<<"\n";
            d=1;
        }
    }
    if(d==0) cout<<-1<<"\n";
return 0;
}