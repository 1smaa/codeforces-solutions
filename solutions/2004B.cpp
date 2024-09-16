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
        int l,r;
        cin>>l>>r;
        int L,R;
        cin>>L>>R;
        if(l>R||L>r) cout<<1<<endl;
        else {
            int doors=0;
            for(int i=min(l,L);i<=max(r,R);i++){
                int j=i+1;
                if(((j<=r&&j>=l)&&(i<=R&&i>=L))||((j<=R&&j>=L)&&(i<=r&&i>=l))) doors++;
            }
            cout<<doors<<endl;
        }
    }
    return 0;
}