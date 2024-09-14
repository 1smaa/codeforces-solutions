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
        int n,q;
        cin>>n>>q;
        vector<int> a(n,0);
        vector<int> sums(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i) sums[i]=sums[i-1]+a[i];
            else sums[i]=a[i];
        }
        while(q--){
            ll l,r;
            cin>>l>>r;
            l--;
            r--;
            int shiftl=(l/n);
            int shiftr=(r/n);
            int posl=l%n;
            int posr=r%n;
            ll res=0;
            res+=sums[n-1]-(posl ? sums[posl-1] : 0)+((shiftl%n ? sums[shiftl-1] : 0));
            //add end residue
            res+=sums[n-1]*(shiftr-shiftl-1);
            cout<<res<<endl;
        }
    }
    return 0;
}