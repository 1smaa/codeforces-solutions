#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>

#define ll long long
#define INF 0x3f3f3f3f
#define MINF 0xf3f3f3f3
#define IPAIR pair<int,int>
using namespace std;

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string s;
    cin>>s;
    bool valid=false;
    int n=s.length();
    string res;
    int l=(n/2) + (n%2);
    for(int i=1;i<l&&!valid;i++){
        res="";
        if(s[i]==s[0]&&s.substr(i,n-i)==s.substr(0,n-i)){
            res=s.substr(i,n-i);
            valid=true;
        }
    }
    cout<<(valid ? "YES" : "NO")<<endl;
    if(valid) cout<<res<<endl;
    return 0;
}