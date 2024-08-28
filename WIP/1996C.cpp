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

void sol(vector<int>& diff,string& s1,string& s2,int n){
    
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s1,s2;
        cin>>s1>>s2;
        vector<int> diff(n,0);
        sol(diff,s1,s2,n);
        while(q--){
            int l,r;
            cin>>l>>r;
            if(l==r) cout<<(s1[l-1]!=s2[l-1])<<endl;
            else if(l>=2) cout<<(diff[r-1]-diff[l-2])<<endl;
            else cout<<diff[r-1]<<endl;
        }
    }
    return 0;
}