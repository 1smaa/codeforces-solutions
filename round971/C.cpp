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
using namespace std;

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int xJumps=ceil(static_cast<float>(x)/k);
        int yJumps=ceil(static_cast<float>(y)/k);
        if(xJumps>yJumps) cout<<(xJumps*2)-1<<endl;
        else cout<<(yJumps*2)<<endl;
    }
    return 0;
}