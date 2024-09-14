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
using namespace std;

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll s=(2*n*k+n*n-n)/2;
        double res=ceil(static_cast<double>(s))/4.0;
        ll r=0;
        int min=s;
        int index=1;
        while(r<s){
            s-=(n+k-index);
            r+=(n+k-index);
            if(r<s&&s-r<min) min=s-r;
            index++;
        }
        if(r-s<min) min=r-s;
        cout<<min<<endl;

    }
    return 0;
}