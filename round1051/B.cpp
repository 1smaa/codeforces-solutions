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
    //cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> b(k,0);
        for(int i=0;i<k;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll sum=0;
        int j=0;
        int i=n-1;
        while(i>=0&&j<k){
            int start=i;
            while(i>start-b[j]+1&&i>=0){
                sum+=a[i--];
            }
            i--;
            j++;
        }
        for(;i>=0;i--){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}