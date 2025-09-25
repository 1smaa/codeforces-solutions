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
        vector<int> freq{};
        int curr=1;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                freq.push_back(curr);
                curr=1;
            } else curr++;
        }
        freq.push_back(curr);
        sort(freq.begin(),freq.end());
        int c=freq.size();
        int max=freq[c-1];
        for(int i=c-2;i>=0;i--){
            if(freq[i]*(c-i)>max) max=freq[i]*(c-i);
        }
        cout<<max<<endl;
    }
    return 0;
}