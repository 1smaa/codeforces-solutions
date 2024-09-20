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
        vector<int> a(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> diff{};
        int lb=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<lb) diff.push_back(lb-a[i]);
            else{
                lb=a[i];
            }
        }
        sort(diff.begin(),diff.end());
        ll cost=0;
        for(int i=0;i<diff.size();i++){
            int d=diff[i];
            if(i) d-=diff[i-1];
            cost+=(diff.size()-i+1)*d;
        }
        cout<<cost<<endl;
    }
    return 0;
}