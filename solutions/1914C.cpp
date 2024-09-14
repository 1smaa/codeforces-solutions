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
        vector<int> b(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        vector<int> bm(n,0);
        vector<int> as(n,0);
        bm[0]=b[0];
        for(int i=1;i<n;i++) bm[i]=max(bm[i-1],b[i]);
        as[0]=a[0];
        for(int i=1;i<n;i++) as[i]=as[i-1]+a[i];
        int exp=a[0]+(k-1)*b[0];
        for(int i=1;i<min(n,k);i++){
            if(as[i]+((k-i-1)*bm[i])>exp) {exp=as[i]+((k-i-1)*bm[i]); }
        }
        cout<<exp<<endl;
    }
    return 0;
}