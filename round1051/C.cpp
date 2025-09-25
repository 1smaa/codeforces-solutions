#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>
#include <queue>

#define ll long long
#define INF 0x7fffffff
#define MINF 0xffffffff
#define IPAIR pair<int,int>
#define MOD 1000000007

using namespace std;

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> tree(n-1,vector<int>(3,0));
        for(int i=0;i<n-1;i++){
            int u,v,x,y;
            cin>>u>>v>>x>>y;
            tree[i]=vector<int>{u,v,x-y};
        }

    }
    return 0;
}