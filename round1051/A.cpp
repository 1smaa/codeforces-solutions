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
        vector<int> a(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<IPAIR> p{};
        for(int i=0;i<n;i++) p.push_back(IPAIR(a[i],i));
        sort(p.begin(),p.end(),[](IPAIR& p1,IPAIR& p2){
            return p1.first>p2.first;
        });
        vector<int> cAdj{p[0].second};
        bool possible=true;
        for(int i=1;i<n-1&&possible;i++){
            int index=p[i].second;
            bool found=false;
            for(int j=0;j<cAdj.size()&&!found;j++){
                if(abs(cAdj[j]-index)==1) found=true;
            }
            if(!found) possible=false;
            else cAdj.push_back(index);
        }
        cout<<(possible ? "YES" : "NO")<<endl;
    }
    return 0;
}