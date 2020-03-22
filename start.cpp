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

int count(int n){    
    if(n >= 0 && n<=9){
        return 1;
    }
    int smallAns = count(n / 10);
    return smallAns + 1;
}

int main() {
    int x=156;
    cout<<count(x)<<"\n";


    string s="Shivam";
    string s1(s,2,2);

    cout<<s<<endl;
    cout<<s1<<endl;
    string s2=s.substr(2,2);
    cout<<s2<<endl;
return 0;
}