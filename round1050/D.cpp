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
        vector<int> dispari{};
        ll s=0;
        for(int i=0;i<n;i++){
            if(a[i]%2) dispari.push_back(a[i]);
            else s+=a[i];
        }
        if(!dispari.size()) cout<<0<<endl;
        else {
            sort(dispari.begin(),dispari.end());
            int i=0,j=dispari.size()-1;
            bool toggle=false;
            while (i<=j){
                if(!toggle){
                    s+=dispari[j--];
                } else i++;
                toggle=!toggle;
            }
            cout<<s<<endl;
        }
    }
    return 0;
}