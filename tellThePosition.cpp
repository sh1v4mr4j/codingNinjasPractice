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
using namespace std;
struct Stud{
    int r,m;
    string nam;
    
};
bool comp(Stud s1,Stud s2){
    if(s1.m==s2.m) return s1.r<s2.r;
    else return s1.m>s2.m;
}
int main()
{
    int n;
    vector<Stud> v;
    Stud s1;
    int n1,n2,n3;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s>>n1>>n2>>n3;
        s1.nam=s;
        s1.r=i+1;
        s1.m=n1+n2+n3;
        
        v.push_back(s1);
    }
    
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++){
        cout<<i+1<<" "<<v[i].nam<<"\n";
        
    }
	return 0;
}