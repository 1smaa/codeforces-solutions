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
        int s=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            s+=a[i];
        }
        int l=0,r=n-1;
        int lSum=0,rSum=0;
        bool broken=false;
        while(l<r-1){
            if(lSum%3==rSum%3&&lSum%3==s%3&&rSum%3==s%3){
                break;
                broken=true;
            }
            if(lSum%3==s%3||lSum%3==rSum%3){
                lSum+=a[l++];
                s-=a[l-1];
            } else if(rSum%3==s%3){
                rSum+=a[r--];
                s-=a[r+1];
            } else {
                broken=true;
                break;
            }
        }
        if(broken||(lSum%3==rSum%3&&lSum%3==s%3&&rSum%3==s%3)||(lSum%3!=rSum%3&&lSum%3!=s%3&&rSum%3!=s%3)) cout<<l<<" "<<r<<endl;//<<": "<<(lSum%3)<<", "<<(s%3)<<", "<<(rSum%3)<<endl;
        else cout<<"0 0"<<endl;
    }
    return 0;
}