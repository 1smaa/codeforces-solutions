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

ll recursion(vector<int>& a,int index,bool pref){
    if(index==0){
        if(pref) { return abs(a[0]);}
        else return a[0];
    } else {
        ll res=0;
        if(a[index]<0){
            res=a[index]+recursion(a,index-1,false);
        } else {
            res=a[index]+recursion(a,index-1,true);
        }
        if(pref) return abs(res);
        else res;
    }
}

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<recursion(a,n-1,(n-1)>0)<<endl;
    }
    return 0;
}