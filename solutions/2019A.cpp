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
        int max=a[0];
        vector<int> maxInds{0};
        for(int i=0;i<n;i++){
            if(a[i]==max) maxInds.push_back(i);
            else if(a[i]>max){
                max=a[i];
                maxInds=vector<int>{i};
            }
        }
        if(!(n%2)){
            cout<<max+(n/2)<<endl;
        } else {
            bool found=false;
            int min=n/2;
            for(int i=0;i<maxInds.size()&&!found;i++){
                if(!(maxInds[i]%2)){
                    cout<<max+min+1<<endl;
                    found=true;
                }
            }
            if(!found) cout<<max+min<<endl;
        }
    }
    return 0;
}