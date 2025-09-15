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
        int n,k; cin>>n>>k;
        if(k==1||n==1) { cout<<n<<endl; continue;}
        int l=1;
        while(l<=n){
            l*=k;
        }
        l/=k;
        int c=0;
        while(n&&l){
            c+=n/l;
            n%=l;
            l/=k;
        }
        cout<<c<<endl;
    }
    return 0;
}