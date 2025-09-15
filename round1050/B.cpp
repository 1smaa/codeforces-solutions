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
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int> a(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> b(m,0);
        for(int i=0;i<m;i++) cin>>b[i];
        /*sort(a.begin(),a.end());
        sort(b.begin(),b.end());*/
        /*int i=0;
        while(i<n&&a[i]<=y){
            i++;
        }
        int j=0;
        while(j<m&&b[j]<=x){
            j++;
        }*/
        cout<<(n+m)<<endl;
    }
    return 0;
}