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
        int n; cin>>n;
        vector<ll> a(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        ll s=a[n-2];
        for(int i=0;i<n-2;i++){
            s-=a[i];
        }
        cout<<(ll)a[n-1]-s<<endl;
    }
    return 0;
}