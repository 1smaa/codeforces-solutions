#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>

#define ll long long
#define INF 0x3f3f3f3f
#define MINF 0xf3f3f3f3

using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n,0);
        set<int> ns{};
        for(int i=0;i<n;i++){
            cin>>a[i];
            ns.insert(a[i]);
        }
        int dim=ns.size();
        vector<vector<int>> sequences{};
        map<int,vector<int>> index{};
        for(auto it=ns.begin();it!=ns.end();it++){
            index[(*it)-1]=vector<int>{};
        }
        for(int i=0;i<n;i++) index[a[i]].push_back(i);
        
    }
    return 0;
}