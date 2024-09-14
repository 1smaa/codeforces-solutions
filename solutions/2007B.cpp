#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>

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
        int max=0;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            if(p>max) max=p;
        }
        while(m--){
            char c;
            int l,r;
            cin>>c>>l>>r;
            int update=(c=='+');
            if(l<=max&&r>=max){
                if(update) max++;
                else max--;
            }
            cout<<max<<" ";
        }
        cout<<endl;
    }
    return 0;
}