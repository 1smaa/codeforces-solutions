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
        int l,r;
        cin>>l>>r;
        if(!(l%2)) l++;
        int res=0;
        while(l+2<=r){
            //cout<<l<<endl;
            res++;
            l+=4;
        }
        cout<<res<<endl;
    }
    return 0;
}