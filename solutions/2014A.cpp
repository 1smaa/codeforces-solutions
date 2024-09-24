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
        int n,k;
        cin>>n>>k;
        vector<int> a(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        int res=0;
        int gold=0;
        for(int i=0;i<n;i++){
            if(a[i]>=k) gold+=a[i];
            else{
                if(!a[i]&&gold){ gold--; res++; } 
            }
        }
        cout<<res<<endl;
    }
    return 0;
}