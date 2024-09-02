#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>
#include <queue>

#define ll long long
#define INF 0x3f3f3f3f
#define MINF 0xf3f3f3f3
#define IPAIR pair<int,int>
using namespace std;

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> res{};
        while(m--){
            char c;
            int l,r;
            cin>>c>>l>>r;
            int update=(c=='+') ? 1 : -1;
            if(l>a[0]) continue;
            for(int i=0;i<n;i++){
                if(a[i]>=l&&a[i]<=r) a[i]+=update;
            }
            for(int i=(n-1)/2;i>=0;i--){
                int j=i;
                while(a[j]<max((2*j+1<n) ? a[2*j+1] : -1,(2*j+2<n) ? a[2*j+2] : -1)){
                    int nindex=(2*j)+(!(2*j+2>=n||a[2*j+1]>a[2*j+2])+1);
                    int aux=a[j];
                    a[j]=a[nindex];
                    a[nindex]=aux;
                    j=nindex;
                }
            }
            res.push_back(a[0]);
        }
        for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}